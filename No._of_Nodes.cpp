//given a binary tree , find the number of nodes .

#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
};

int countNodes(Node* root) {
  if (root == NULL) {
    return 0;
  } else {
    return countNodes(root->left) + countNodes(root->right) + 1;
  }
}

int main() {
  Node* root = new Node();
  root->data = 1;

  Node* left = new Node();
  left->data = 2;
  root->left = left;

  Node* right = new Node();
  right->data = 3;
  root->right = right;

  cout << "The number of nodes in the binary tree is: " << countNodes(root) << endl;

  return 0;
}
