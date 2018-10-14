#include <biostream>
 
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
                    insertHelper(newRoot->left, data);
            }
            else if(data > newRoot->value){
                    insertHelper(newRoot->right, data);
            }
        }
    }
    void printHelper(Node*& newRoot){
        if(newRoot == NULL) return;
        printHelper(newRoot->left);
        cout << newRoot->value << endl;
        printHelper(newRoot->right);
    }

    void leafHelper(Node*& newRoot){
        if(newRoot == NULL) return;
        if(newRoot->left == NULL and newRoot->right == NULL){
            cout << newRoot->value << endl;
        }
        if(newRoot->left != NULL) leafHelper(newRoot->left);
        if(newRoot->right != NULL) leafHelper(newRoot->right);
    }
 
   
    void insert(int data){
        insertHelper(root, data);
       
    }
    void print(){
        printHelper(root);
    }
   
    
   
    void leaf(){
        leafHelper(root);
    }
   
 
 
};
int main(){
    Tree* myTree = new Tree();
 
    int x;
   
    while(cin >> x){
        if(x == 0){
            break;
        }
        myTree->insert(x);
    }
   
    myTree->print();
    return 0;
}

