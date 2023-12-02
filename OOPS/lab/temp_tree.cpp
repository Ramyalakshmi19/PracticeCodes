#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* left;
    node* right;
};
class binary_tree
{
public:
    node* create_node(int value)
    {
        node* new_node=new node();
        new_node->data=value;
        new_node->left=NULL;
        new_node->right=NULL;
    }
    node* insert(node* root,int value)
    {
        if(root==NULL)
        {
            return create_node(value);
        }
        else if(root->data>value)
        {
            root->left=insert(root->left,value);
        }
        else
        {
            root->right=insert(root->right,value);
        }
        return root;
    }
    void inorder(node* node)
    {
        if(node==NULL)
        {
            cout<<"Tree not found\n";
            return;
        }
        else
        {
            if(node->left!=NULL)
            {
               inorder(node->left);
            }
            cout<<node->data<<" ";
            if(node->right!=NULL)
            {
                inorder(node->right);
            }

        }
    }
};
int main()
{
    int n;
    int arr[n];
    cout<<"Enter the number of array elements:";
    cin>>n;
    cout<<"Enter the array elements:";
    binary_tree bst;
    node* root=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        root=bst.insert(root,arr[i]);
    }
    bst.inorder(root);
}
