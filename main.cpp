#include "create_binary_tree.hpp"

int main()
{
    Node* root = Node::CreateBinaryTree();
    ShowDataInorder(root);
    PreInPostOrderInOneTraversal(root);
    return 0;
}
