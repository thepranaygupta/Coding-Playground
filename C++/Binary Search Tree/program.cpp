// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define SPACE 10

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        val = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int v)
    {
        val = v;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    TreeNode *root;
    BST()
    {
        root = NULL;
    }

    void insertNode(TreeNode *new_node)
    {
        if (root == new_node)
        {
            root = new_node;
            cout << "Value Inserted at Root Node!" << endl;
        }
        else
        {
            TreeNode *temp = root;
            while (temp != NULL)
            {
                if (new_node->val == temp->val)
                {
                    cout << "Value Already Exists!"
                         << "Insert Another Value" << endl;
                    return;
                }
            }
        }
    }
    void print2D(TreeNode *r, int space)
    {
        if (r == NULL)
            return;
        space += SPACE;
        print2D(r->right, space);
        cout << endl;
        for (int i = SPACE; i < space; i++)
        {
            cout << " ";
        }
        cout << r->val << "\n";
        print2D(r->left, space);
    }
    bool isEmpty()
    {
        if (root == NULL)
            return true;
        else
            return false;
    }
};

int main()
{
    bool flag = true;
    while (flag)
    {
        cout << "\nSelect an Option:" << endl;
        cout << "1.  Insert Node" << endl;
        cout << "2.  Search Node" << endl;
        cout << "3.  Delete Node" << endl;
        cout << "4.  Print BST Values" << endl;
        cout << "5.  Clear Screen" << endl;
        cout << "6.  Exit Program" << endl;

        int ch;
        cin >> ch;

        switch (ch)
        {
        case 1:
            //Insert Code
            break;
        case 2:
            //Insert Code
            break;
        case 3:
            //Insert Code
            break;
        case 4:
            //Insert Code
            break;
        case 5:
            system("cls");
            break;
        case 6:
            flag = false;
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        } //switch
    }     //while

    return 0;
}