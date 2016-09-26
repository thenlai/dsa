# Binary tree | 二叉树

## 二叉树遍历

二叉树的遍历方式主要分为三种：中序遍历、前序简历及后序遍历。

### 中序遍历

中序遍历的步骤(递归定义)：
  1. 如果节点为空，返回
  2. 对左子树进行中序遍历
  3. 访问根节点
  4. 对右子树进行中序遍历

用代码表示为：
```cpp
typedef struct TreeNode {
	T data;
	TreeNode * left;
	TreeNode * right;
	TreeNode * root;
} TreeNode;

void middle_order(TreeNode *node) {
	if(node->left != NULL) {
		middle_order(node->left);
	}
	visit(node->root);
	if(node->right != NULL) {
		middle_order(node->left);
	}
}
```

### 前序遍历

前序遍历的步骤(递归定义)：
  1. 如果节点为空，返回
  2. 访问根节点
  3. 对左子树进行前序遍历
  4. 对右子树进行前序遍历

## 后序遍历

前序遍历的步骤(递归定义)：
  1. 如果节点为空，返回
  2. 访问根节点
  3. 对左子树进行后序遍历
  4. 对右子树进行后序遍历