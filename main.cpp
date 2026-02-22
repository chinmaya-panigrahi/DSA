#include "create_binary_tree.hpp"

int main()
{
    Node* root = Node::CreateBinaryTree();
    ShowDataInorder(root);
    PreInPostOrderInOneTraversal(root);
    LevelOrderTraversal(root);
    MaximumDepth(root);
    IsBinaryTreeBalanced(root);
    DiameterOfBinaryTree(root);
    MaximumSumPath(root);
    VerticalTraversalOfBinaryTree(root);
    AllNodesAtKDistance(root, root->_left, 1);
    return 0;
}
