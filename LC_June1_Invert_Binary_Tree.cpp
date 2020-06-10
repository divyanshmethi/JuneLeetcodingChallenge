#include<iostream>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void inorder(TreeNode* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
}

void invertTreeUtil(TreeNode* root)
{
	if(root==NULL)
	{
		return;
	}
	invertTreeUtil(root->left);
	invertTreeUtil(root->right);
	TreeNode* temp = root->left;
	root->left = root->right;
	root->right = temp;
}

TreeNode* invertTree(TreeNode* root)
{
	if(root==NULL)
	{
		return root;
	}
	invertTreeUtil(root);
	return root;
}

int main()
{
	TreeNode* root = new TreeNode(4);
	root->left = new TreeNode(2);
	root->right = new TreeNode(7);
	root->left->left = new TreeNode(1);
	root->left->right = new TreeNode(3);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(9);
	cout<<"Before Inverting"<<endl;
	inorder(root);
	cout<<endl;
	root = invertTree(root);
	cout<<"After Inverting"<<endl;
	inorder(root);
	cout<<endl;
}
