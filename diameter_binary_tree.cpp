#include <iostream>
#include "create_binary_tree.hpp"

static int helper(Node* root, int& diameter)
{
    if(root == nullptr)
        return 0;

    int left = helper(root->_left, diameter);
    int right = helper(root->_right, diameter);

    diameter = std::max(diameter, left + right);
    return 1 + std::max(left, right);
}
void DiameterOfBinaryTree(Node* root)
{
    int diameter = 0;
    helper(root, diameter);
    std::cout<<"\nDiameter of tree is : "<<diameter<<std::endl;
}
