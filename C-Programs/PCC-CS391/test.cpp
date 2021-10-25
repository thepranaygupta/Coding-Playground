#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }

    bool isTreeEmpty()
    {
        if (root == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    /*****************************/
    // __START	 1  - Insert a Node(Iterative Approach)__
    void insertNodeITTE(int val)
    {
        Node *n = new Node(val);
        if (isTreeEmpty())
        {
            root = n;
            cout << "Value Inserted as root Node";
        }
        else
        {
            Node *temp = root;
            while (temp != NULL)
            {
                // check if the value already exists at the current node
                if (val == temp->data)
                {
                    cout << "Value already exists";
                    return;
                }
                // to insert in the left position
                else if (val < temp->data && temp->left == NULL)
                {
                    temp->left = n;
                    cout << "Value inserted to left";
                    break;
                }
                // to traverse to the left node
                else if (val < temp->data)
                {
                    temp = temp->left;
                }
                // to insert in the right position
                else if (val > temp->data && temp->right == NULL)
                {
                    temp->right = n;
                    cout << "Value inserted to right";
                    break;
                }
                // to traverse to the right node
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
    // __END 1 - Insert a Node(Iterative Approach)__

    /*****************************/
    // __START	2  - Insert a Node(Recursive Approach)__
    Node *insertRecursive(Node *root, int val)
    {
        Node *n = new Node(val);
        // if the root is null, create a new node and return it
        if (root == NULL)
        {
            cout << "Value Inserted as root Node";
            return new Node(val);
        }
        // if the value is less than the root node then recur for the left subtree
        if (val < root->data)
        {
            root->left = insertRecursive(root->left, val);
            cout << "Value inserted to left";
        }
        // if the value is less than the root node then recur for the right subtree
        else if (val > root->data)
        {
            root->right = insertRecursive(root->right, val);
            cout << "Value inserted to right";
        }
        else
        {
            cout << "Value already exists" << endl;
        }
        return root;
    }
    // __END 2 - Insert a Node(Recursive Approach)__

    /*****************************/
    // __START 3 - Insert a Node(Level Order Insertion)__
    void insertLevelOrder(Node *rt, int val)
    {
        Node *nn = new Node(val);
        if (rt == NULL)
        {
            rt = nn;
            cout << "Value Inserted as root Node" << endl;
            ;
            root = rt;
            return;
        }
        queue<Node *> Q;
        Q.push(rt);

        while (!Q.empty())
        {
            Node *n = Q.front();
            Q.pop();

            if (n->left == NULL)
            {
                n->left = nn;
                cout << "Value inserted at the left." << endl;
                root = rt;
                return;
            }
            else if (n->right == NULL)
            {
                n->right = nn;
                cout << "Value inserted at the right." << endl;
                root = rt;
                return;
            }
            else
            {
                Q.push(n->left);
                Q.push(n->right);
            }
        }
    }
    // END 3 - Insert a Node(Level Order Insertion)
    /******************************/
    // START 4 - Print 2D
    void print2D(Node *root, int space)
    {
        if (root == NULL)
            return;
        print2D(root->right, space + 5);
        cout << " ";
        for (int i = 0; i < space; i++)
        {
            cout << " ";
        }
        cout << root->data << endl;
        ;
        print2D(root->left, space + 5);
    }
    // END 4 - Print 2D

    /******************************/

    // START 5 - Height of Tree
    int Height(Node *r)
    {
        if (r == NULL)
        {
            return -1;
        }
        else
        {
            int lheight = Height(r->left);
            int rheight = Height(r->right);

            if (lheight > rheight)
                return (lheight + 1);
            else
                return (rheight + 1);
        }
    }
    // END 5 - Height of Tree

    /******************************/

    // START 6 - Sum of all Nodes in the Tree
    int sumOfNodes(Node *r)
    {
        if (r == NULL)
            return 0;
        else
        {
            int lsum = sumOfNodes(r->left);  // to calc the sum of left subtree
            int rsum = sumOfNodes(r->right); // to calc the sum of right subtree
            return lsum + rsum + r->data;
        }
    }
    // END 6 - Sum of all Nodes in the Tree

    /******************************/

    // START 7 - Total Number of Nodes in the Tree
    int countNodes(Node *r)
    {
        if (r == NULL)
            return 0;

        else
        {
            int lcount = countNodes(r->left);  // count the total nodes in left subtree
            int rcount = countNodes(r->right); // count the total nodes in right subtree
            return lcount + rcount + 1;        //+1 becoz we r counting the root
        }
    }
    // END 7 - Total Number of Nodes in the Tree                                                                                                                                    };
    int main()
    {
        BST bt; // BST is a class that contains all functions
        int option, val;
        do
        {
            cout << endl;
            cout << "Enter the option: " << endl;
            cout << "0. clear screen " << endl;
            cout << "1. Insertion in BST(itterative approach)" << endl;
            cout << "2. Insertion in BST(recurrsive approach)" << endl;
            cout << "3. Insert a Node(Level Order Insertion)" << endl;
            cout << "4. Print 2D" << endl;
            cout << "5. Height of Tree" << endl;
            cout << "6. Sum of Tree" << endl;
            cout << "7. Total Number of Nodes in the Tree" << endl;

            cin >> option;
            // Node n1
            Node *n = new Node();

            switch (option)
            {

            case 0:
                system("cls");
                break;

            case 1:
                cout << "Enter value : ";
                cin >> val;
                bt.insertNodeITTE(val);
                break;

            case 2:
                cout << "Enter Value : ";
                cin >> val;
                n->data = val;
                bt.root = bt.insertRecursive(bt.root, val);
                break;

            case 3:
                cout << "Enter Value : ";
                cin >> val;
                bt.insertLevelOrder(bt.root, val);
                break;

            case 4:
                bt.print2D(bt.root, 5);

            case 5:
                cout << "Height of Tree is : " << bt.Height(bt.root) << endl;
                break;

            case 6:
                cout << "Sum of Tree is : " << bt.sumOfNodes(bt.root) << endl;
                break;

            case 7:
                cout << "Total no. Of Nodes are : " << bt.countNodes(bt.root) << endl;
                break;
            }
        } while (option != 0);

        return 0;
    }
}