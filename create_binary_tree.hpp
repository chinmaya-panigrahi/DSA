#ifndef CREATE_BINARY_TREE_HPP_INCLUDED
#define CREATE_BINARY_TREE_HPP_INCLUDED

#include <iostream>
using namespace std;

class Node{
    int _data;
  public:
  Node(int data);
  void ShowData();
  static Node* CreateBinaryTree();

  Node *_left, *_right;
};

void ShowDataInorder(Node* root);

#endif // CREATE_BINARY_TREE_HPP_INCLUDED
