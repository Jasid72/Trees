#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *Right;
};

class Tree
{
private:
    Node *pre = NULL;
    Node *next = NULL;
public:
    void creat(int data);
    void preorder(Node *root);
    void postorder(Node *root);
};

void Tree::postorder(Node *root) {
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->Right);
        cout << root->data;
    }
}

void Tree::preorder(Node *root) {
    if(root != NULL)
    {
        cout<<root->data;
        preorder(root->left);
        preorder(root->Right);
    }
}

void Tree::creat(int data) {
    Node *n1 = new Node();
    n1->data = data;
    n1->Right = next;
    n1->left = pre;
    cout<<n1->data<<endl;
}

int main()
{
    Tree r1, r2,r3,r4,r5;
    r1.creat(4);
    r2.creat(1);
    r3.creat(6);
    r4.creat(5);
    r5.creat(2);


}