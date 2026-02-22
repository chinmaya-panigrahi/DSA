#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include "create_binary_tree.hpp"

void VerticalTraversalOfBinaryTree(Node* root)
{
    std::map<int, std::vector<int>> list;
    std::queue<std::pair<Node*, int>> Q;

    Q.push({root, 0});

    while(!Q.empty())
    {
        int size = Q.size();
        for(int i=0; i<size; i++)
        {
            auto item = Q.front();
            Q.pop();

            list[item.second].push_back(item.first->GetData());

            if(item.first->_left)
            {
                Q.push({item.first->_left, item.second-1});
            }
            if(item.first->_right)
            {
                Q.push({item.first->_right, item.second+1});
            }
        }
    }

    for(auto it : list)
    {
        std::cout<<it.first<<" : ";
        for(auto i : it.second)
        {
            std::cout<<i<<", ";
        }
        std::cout<<std::endl;
    }
}
