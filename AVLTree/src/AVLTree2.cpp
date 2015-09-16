#include <iostream>
#include <stdlib.h>
using namespace std;

typedef int keyType;
struct BinaryTreeNode {
    keyType key;
    int height; //记录以该节点为root的树高度
    BinaryTreeNode* left; // left child
    BinaryTreeNode* right; // right child
};

// define AVL node
typedef BinaryTreeNode avlnode;

// define AVL tree
typedef BinaryTreeNode avltree;


// 比较左右子树高度，取最大的
int maxh(int ha, int hb) {
    return ha > hb ? ha : hb;
}

// 计算树的高度
int height(avltree* tree) {
    if (NULL == tree)
    	return 0;
    return tree->height;
}

// LL型旋转
avlnode* singleRightRotate(avlnode* aNode) {
    avlnode* bNode = aNode->left;
    // rebuild relation
    aNode->left = bNode->right;
    bNode->right = aNode;
    // adjust the height
    aNode->height = maxh(height(aNode->right), height(aNode->left)) + 1;
    bNode->height = maxh(height(bNode->right), height(bNode->left)) + 1;
    return bNode;
}

//RR型旋转
avlnode* singleLeftRotate(avlnode* aNode) {
    avlnode* bNode = aNode->right;
    // rebuild relation
    aNode->right = bNode->left;
    bNode->left = aNode;
    // adjust height
    aNode->height = maxh(height(aNode->right), height(aNode->left)) + 1;
    bNode->height = maxh(height(bNode->right), height(bNode->left)) + 1;
    return bNode;
}

//LR型旋转
avlnode* leftRightRotate(avlnode* aNode) {
    aNode->left = singleLeftRotate(aNode->left);
    return singleRightRotate(aNode);
}

//RL型
avlnode* rightLeftRotate(avlnode* aNode) {
    aNode->right = singleRightRotate(aNode->right);
    return singleLeftRotate(aNode);
}

avlnode* avl_inssert(avltree* &tree, keyType key) {
    if (NULL == tree) {
        tree = (avlnode*) malloc(sizeof(avlnode));
        tree->key = key;
        tree->height = 1;
        tree->left = tree->right = NULL;
    } else if (key > tree->key) { // insert into the right subtree
        tree->right = avl_inssert(tree->right, key);
        int balanceFactor = height(tree->right) - height(tree->left);
        if (balanceFactor == 2) {
            if (key > tree->right->key) { // RR 型 , 右侧单旋
                tree = singleLeftRotate(tree);
            } else { // RL型 , 右侧双旋
                tree = rightLeftRotate(tree);
            }
        }
    } else if (key < tree->key) { // insert into the left subtree
        tree->left = avl_inssert(tree->left, key);
        int balanceFactor = height(tree->left) - height(tree->right);
        if (balanceFactor == 2) {
            if (key < tree->left->key) { // LL型 , 左侧单旋
                tree = singleRightRotate(tree);
            } else { // LR型 ， 左侧双旋
                tree = rightLeftRotate(tree);
            }
        }
    } else { // if the key is already exists, nothing to do....
    }
    // 重新计算树的高度
    tree->height = maxh(height(tree->left), height(tree->right)) + 1;

    return tree;
}

int main(){
	int a[] = { 16, 3 ,7, 11 ,9 ,26 ,18, 14, 15 };
		int alen = sizeof(a) / sizeof(a[0]);
		avltree* T = NULL;
		for (int i = 0; i < alen; i++){
			avl_inssert(T, a[i]);
		}
	return 0;
}
