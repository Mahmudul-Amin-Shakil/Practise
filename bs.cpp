#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left,*right;
}node;
struct node* create()
{
    int x;
    struct node *newnode;
    newnode=(struct node*) malloc(sizeof(struct node));
    cout<<"enter data (-1 for no):"<<endl;
    cin>>x;
    if(x==-1)
    return 0;
    newnode->data=x;
    cout<<"enter left child :"<<endl;
    newnode->left=create();
    cout<<"enter right child :"<<endl;
    newnode->right=create();
    return newnode;
};
void preorder(struct node *root)
{
    if(root==0)
      return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    struct node *root;
    root=0;
    root=create();
    preorder(root);
    return 0;
}
