#include <bits/stdc++.h>
 
using namespace std;

 
struct Node{
public:
    int value;
    Node* right;
    Node* left;
    Node(int data){
        value = data;
        right = left = NULL;
    }
};
 
struct Tree{
public:
    Node* root;
    Tree(){
        root =  NULL;
    }
    void insert(Node*& newRoot, int data){
        Node* node = new Node(data);
        if(newRoot == NULL){
            newRoot = node;
        }
        else {
            if(data < newRoot->value){
                    insert(newRoot->left, data);
            }
            else if(data > newRoot->value){
                    insert(newRoot->right, data);
            }
        }
    }
   
    int height(Node*& newRoot){
        if(newRoot == NULL){
            return 0;
        }
        int leftHeight = height(newRoot->left);
        int rightHeight = height(newRoot->right);
        return max(leftHeight, rightHeight) + 1;
    }
    
    
    void leaf(Node*& newRoot){
        if(newRoot == NULL) return;
        if(newRoot->left == NULL and newRoot->right == NULL){
            cout << newRoot->value << endl;
            //return;
        }
        if(newRoot->left != NULL) leaf(newRoot->left);
        if(newRoot->right != NULL) leaf(newRoot->right);
    }
   
   
 
 
};
int main(){
    Tree* myTree = new Tree();
 
    int x;
    while(cin >> x){
        if(x == 0){
            break;
        }
        myTree->insert(myTree->root, x);
    }
    myTree->leaf(myTree->root);
    return 0;
}
