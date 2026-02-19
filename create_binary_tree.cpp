#include "create_binary_tree.hpp"

Node::Node(int data) : _data(data), _left(nullptr), _right(nullptr){}
void Node::ShowData(){
    cout<<_data<<" ";
}

Node* Node::CreateBinaryTree(){
    Node *root = new Node(10);
    root->_left = new Node(20);
    root->_right = new Node(30);
    root->_left->_left = new Node(40);
    root->_left->_right = new Node(50);

    return root;
}

void ShowDataInorder(Node* root)
{
    if(!root)
        return;

    ShowDataInorder(root->_left);
    root->ShowData();
    ShowDataInorder(root->_right);
}
