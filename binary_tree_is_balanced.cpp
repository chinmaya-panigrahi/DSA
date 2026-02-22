#include <iostream>
#include "create_binary_tree.hpp"

int helper(Node* root)
{
    if(root == nullptr)
        return 0;
    int left = helper(root->_left);
    int right = helper(root->_right);

    return 1 + std::max(left, right);
}
void IsBinaryTreeBalanced(Node* root)
{
    int leftHeight = helper(root->_left);
    int rightHeight = helper(root->_right);

    std::cout<<"\nThe tree is balanced : "<<(std::abs(leftHeight - rightHeight) > 1 ? "FALSE" : "TRUE")<<std::endl;
}
