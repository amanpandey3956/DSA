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
    node *search(node *r, int key)
    {
        if (r == nullptr)
        {
            return nullptr;
        }
        else if (r->info == key)
        {
            return r;
        }
        else if (key < r->info)
        {
            return search(r->left, key);
        }
        else
        {
            return search(r->right, key);
        }
    }
    void search(int x)
    {
        node *s = search(root, x);

        if (s != nullptr)
        {
            cout << x << " Is found  " << s << endl;
        }
        else
        {
            cout << "Not found!!" << endl;
        }
    }
    node* getSuccessor(node *curr)
    {
        curr = curr->right;
        while(curr!=NULL && curr->left!=NULL)
        {
            curr = curr->left;
        }
        return curr;
    }
    node* deleteNode(node* root, int x)
    {
        if(root == NULL)
        {
            return root;
        }
        if(root->info > x)
        {
            root->left = deleteNode(root->left,x);
        }
        else if(root->info < x)
        {
            root->right = deleteNode(root->right,x);
        }
        else
        {
            if(root->left == NULL)
            {
                node *temp = root->right;
                delete root;
                return temp;
            }
            if(root->right == NULL)
            {
                node *temp = root->left;
                delete root;
                return temp;
            }
            else
            {
                node *succ = getSuccessor(root);
                root->info = succ->info;
                root->right = deleteNode(root->right,succ->info);
            }
        }
        return root;
    }
    void deleted(int x)
    {
        root=deleteNode(root,x);
        cout<<"Deleted item is:"<<x<<endl;
        cout<< "after deletion :"<<endl;
    }

};
int main()
{
    node* root=nullptr;
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
    t1.search(17);
    t1.deleted(35);
    t1.visit();
    return 0;
}
