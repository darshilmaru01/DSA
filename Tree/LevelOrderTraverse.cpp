#include <iostream>
#include <queue>
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

void levelOrderTraverse(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{

    node *root = NULL;

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // creating a tree
    root = bulidTree(root);

    // printing level order traversal
    cout << "Printing Level Order Traversal: " << endl;
    levelOrderTraverse(root);
    return 0;
}