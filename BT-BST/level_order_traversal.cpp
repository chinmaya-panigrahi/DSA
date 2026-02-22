#include <iostream>
#include <queue>
#include "../create_binary_tree.hpp"

void LevelOrderTraversal(Node* root)
{
    if(root == nullptr)
        return;

    std::queue<Node*> Q;
    Q.push(root);

    std::cout<<"\nLevel order traversal\n";
    while(!Q.empty())
    {
        int size = Q.size();
        for(int i=0; i<size; i++)
        {
            auto item = Q.front();
            Q.pop();
            item->ShowData();
            if(item->_left)
                Q.push(item->_left);
            if(item->_right)
                Q.push(item->_right);
        }
        std::cout<<std::endl;
    }
}
