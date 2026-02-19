#include <iostream>
#include <vector>
#include <stack>
#include "create_binary_tree.hpp"

void PreInPostOrderInOneTraversal(Node* root)
{
    std::cout<<"This method is called\n";
    std::vector<int> pre, in, pos;
    std::stack<std::pair<Node*, int>> st;

    st.push({root, 1});

    while(!st.empty())
    {
        auto item = st.top();
        st.pop();
        if(item.second == 1)
        {
            pre.push_back(item.first->GetData());
            item.second = 2;
            st.push(item);
            if(item.first->_left)
                st.push({item.first->_left, 1});
        }
        else if(item.second == 2)
        {
            in.push_back(item.first->GetData());
            item.second = 3;
            st.push(item);
            if(item.first->_right)
                st.push({item.first->_right, 1});
        }
        else
        {
            pos.push_back(item.first->GetData());
        }
    }

    std::cout<<"Preorder"<<std::endl;
    for(auto it : pre)
        std::cout<<it<<" ";
    std::cout<<std::endl<<"Inorder"<<std::endl;
    for(auto it : in)
        std::cout<<it<<" ";
    std::cout<<std::endl<<"Postorder"<<std::endl;
    for(auto it : pos)
        std::cout<<it<<" ";
    std::cout<<std::endl;
}
