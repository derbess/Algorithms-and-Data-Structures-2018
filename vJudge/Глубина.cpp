#include<iostream>
#include<cmath>
using namespace std;
class Node{
	public:
		int key;
		Node *left, *right, *parent;
	Node(int key){
		this -> key = key;
		left = NULL;
		right = NULL;
		parent = NULL;
	}
};

class Tree{
	public:
		Node *root;
	Tree(){
		root = NULL;
	}
	
	Node *insert( Node *node, int key){
		if(node == NULL){
			node = new Node(key);
			return node;
		}else if(node -> key > key){
			node ->left = insert(node ->left , key);
		}else if( node -> key < key){
			node -> right = insert(node -> right , key);
		}
		return node;
	}
	int keycount(Node *node){
		if(node == NULL){
			return 0;
		}
		int left =  keycount( node -> left);
		int right = keycount(node -> right);
		
		return left + right;
	}

int treeHeight(Node *p){
	if (p == NULL){
		return 0;
	}
	int left = treeHeight(p->left);
	int right = treeHeight(p->right);
	return 1+ max(left, right);
}	
};

int main(){
	Tree *tree = new Tree();
	int k;
	while(true){
		cin>>k;
		if(k==0){
			break;
		}
		tree -> root = tree -> insert(tree -> root, k);
	}
    cout << tree -> treeHeight(tree -> root);
	return 0;
}

