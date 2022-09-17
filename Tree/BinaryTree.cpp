#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *bulidTree(node *root)
{
    cout << "Enter the data for node: " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "Enter on left of " << data << endl;
    root->left = bulidTree(root->left);
    cout << "Enter on right of " << data << endl;
    root->right = bulidTree(root->right);
    return root;
}

int main()
{

    node *root = NULL;

    // creating a tree
    root = bulidTree(root);
    return 0;
}