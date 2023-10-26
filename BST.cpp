#include "BST.h"

using namespace std;

TreeNode* insert(TreeNode* root, int key) {
  if (root == nullptr) {
    TreeNode* node = new TreeNode(key);
    return node;
  }

  if (key < root->data) {
    root->left = insert(root->left, key);
  } else if (key > root->data) {
    root->right = insert(root->right, key);
  }

  return root;
}

void viewBST(TreeNode* root) {
  if (root != nullptr) {
    viewBST(root->left);
    cout << root->data << " ";
    viewBST(root->right);
  }
}
