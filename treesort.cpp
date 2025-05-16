#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

struct node *createNode(int data)
{
    struct node *temp=new (node);
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;

};

struct node *insert(struct node *root,int data)
{
    if(root==NULL)
    {
        return createNode(data);
    }
    if(data<root->data)
        root->left=insert(root->left,data);
    else
        root->right=insert(root->right,data);

    return root;
};

void inorder (struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main()
{
    int n,num;
    struct node *root=NULL;
    cout<<"Enter total element number : \n";
    cin>>n;
    cout<<"Enter "<<n<<" elements : \n";
    for(int i=0;i<n;i++)
    {
        cin>>num;
        root=insert(root,num);
    }
    cout<<endl;
    cout<<"sorted arry is : \n";
    inorder(root);
    cout<<endl;
}
