#include <iostream>
#include <climits>
#include "create_binary_tree.hpp"

static int helper(Node* root, int& maxsum)
{
    if(root == nullptr)
        return 0;

    int left = helper(root->_left, maxsum);
    int right = helper(root->_right, maxsum);

    maxsum = std::max(maxsum, root->GetData() + left + right);

    return root->GetData() + std::max(left, right);
}

void MaximumSumPath(Node* root)
{
    int maxsum = INT_MIN;
    helper(root, maxsum);

    std::cout<<"The maximum sum path is : "<<maxsum<<std::endl;
}
