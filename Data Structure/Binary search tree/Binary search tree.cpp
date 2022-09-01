#include<iostream>
using namespace std;
class node
{
public:
    node *left,*right;
    int info;
};
class tree
{
private:
    node *root=nullptr;
public:
    tree()
    {
        root=nullptr;
    }
    node* insert(node *r,int y)
    {
        if(r==nullptr)
        {
            r=new node;
            r->info=y;
            r->left=r->right=nullptr;
        }
        else if(y<r->info)
        {
            r->left=insert(r->left,y);
        }
        else if(y>r->info)
        {
            r->right=insert(r->right,y);

        }
        return r;
    }
    void findMin(node *r)
    {
        if(r->left==nullptr)
        {
            cout<<"Min number is"<<r->info<<endl;
            return;
        }
        findMin(r->left);
    }
    void findMax(node *r)
    {
        if(r->right==nullptr)
        {
            cout<<"Max number is"<<r->info<<endl;
            return;
        }
        findMax(r->right);
    }
    void find()
    {
        findMin(root);
        findMax(root);

    }
    void inorder(node *r)
    {
        //left root right
        if(r==nullptr)
        {
            return;
        }
        inorder(r->left);
        cout<<""<<r->info<<endl;
        inorder(r->right);
    }
    void preorder(node *r)
    {
        //root left right
        if(r==nullptr)
        {
            return;
        }
        cout<<""<<r->info<<endl;
        preorder(r->left);
        preorder(r->right);
    }
    void postorder(node *r)
    {
        if(r==nullptr)
        {
            return;
        }
        postorder(r->left);
        postorder(r->right);
        cout<<""<<r->info<<endl;
    }
    void add(int x)
    {
        root= insert(root,x);
    }
    void visit()
    {
        inorder(root);
    }
};
int main()
{
    tree t1;
    t1.add(15);
    t1.add(5);
    t1.add(25);
    t1.add(75);
    t1.add(35);
    t1.add(2);
    t1.add(1);
    t1.find();
    t1.visit();
    return 0;
}
