#ifndef CREATE_BINARY_TREE_HPP_INCLUDED
#define CREATE_BINARY_TREE_HPP_INCLUDED

class Node{
    int _data;
  public:
  Node(int data);
  void ShowData();
  int GetData();
  static Node* CreateBinaryTree();

  Node *_left, *_right;
};

void ShowDataInorder(Node* root);
void PreInPostOrderInOneTraversal(Node* root);
void LevelOrderTraversal(Node* root);
void MaximumDepth(Node* root);
void IsBinaryTreeBalanced(Node* root);
void DiameterOfBinaryTree(Node* root);
void MaximumSumPath(Node* root);
void VerticalTraversalOfBinaryTree(Node* root);
void AllNodesAtKDistance(Node* root, Node* target, int k);

#endif // CREATE_BINARY_TREE_HPP_INCLUDED
