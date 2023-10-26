#include "BST.h"

int main()
{
  TreeNode* tree = new TreeNode(2);
  //TreeNode* temp = insert(tree, 4);
  insert(tree, 4);
  insert(tree, 1);
  insert(tree, 0);
  viewBST(tree);
}
