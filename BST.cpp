#include <iostream>

using namespace std;
class Node {
    public:
    int key;
    Node *left, *right;
    
    Node(int key) {
        this->key = key;
        left = NULL;
        right = NULL;
        
    }
};

class BSTree {
    public:
    Node *root;
    BSTree() {
        root = NULL;
    }

    Node *insert(Node *node, int key) 
	{
        if (node == NULL)
		{
            node = new Node(key);
            return node;
        } 
		else if (node->key >= key) 
		{
            node->left = insert(node->left, key);
        } 
		else 
		{
            node->right = insert(node->right, key);
        }
        return node;
    }
    void inOrder(Node *node)
    {
    	if(node!=NULL)
    	{
    		inOrder(node->left);
    		cout<<node->key;
    		inOrder(node->right);
		}
	}

};

int main() {
	BSTree *tree = new BSTree();
	int n,x;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>x;
		tree -> root = tree->insert(tree->root,x );
	}
	inOrder(tree->*root);
    return 0;
}
