#pragma once
#include <iostream>
typedef int data_t;

struct TreeNode {
  data_t data;
  TreeNode* left;
  TreeNode* right;

  TreeNode(data_t data_) : left(nullptr), right(nullptr) { data = data_; }
};

TreeNode* insert(TreeNode* root, int key);
void viewBST(TreeNode* root);
