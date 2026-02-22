#include <iostream>
#include "create_binary_tree.hpp"

static int helper(Node* root)
{
    if(root == nullptr)
        return 0;

    int left = helper(root->_left);
    int right = helper(root->_right);

    return 1 + std::max(left, right);
}

void MaximumDepth(Node* root)
{
    int result = 0;
    result = helper(root);
    std::cout<<"Maximum depth : "<<result<<std::endl;
}
