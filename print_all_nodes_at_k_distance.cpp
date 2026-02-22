#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
#include "create_binary_tree.hpp"

void markAllParents(Node* root, std::unordered_map<Node*, Node*>& mark_parent)
{
    std::queue<Node*> Q;
    Q.push(root);

    while(!Q.empty())
    {
        int size = Q.size();
        auto item = Q.front();
        Q.pop();

        if(item->_left)
        {
            mark_parent[item->_left] = item;
            Q.push(item->_left);
        }
        if(item->_right)
        {
            mark_parent[item->_right] = item;
            Q.push(item->_right);
        }
    }
}
void AllNodesAtKDistance(Node* root, Node* target, int k)
{
    std::unordered_map<Node*, Node*> mark_parent;
    std::unordered_map<Node*, bool> hashMap;
    markAllParents(root, mark_parent);
    int distance=0;

    std::queue<Node*> Q;
    Q.push(target);

    while(!Q.empty())
    {
        int size = Q.size();
        if(distance == k)
            break;

        distance++;
        for(int i=0; i<size; i++)
        {
            auto item = Q.front();
            Q.pop();
            if(item->_left && !hashMap[item->_left])
            {
                hashMap[item->_left] = true;
                Q.push(item->_left);
            }
            if(item->_right && !hashMap[item->_right])
            {
                hashMap[item->_right] = true;
                Q.push(item->_right);
            }
            if(mark_parent[item] && !hashMap[mark_parent[item]])
            {
                hashMap[mark_parent[item]] = true;
                Q.push(mark_parent[item]);
            }
        }
    }

    while(!Q.empty())
    {
        auto item = Q.front();
        Q.pop();
        std::cout<<item->GetData()<<" ";
    }
}
