
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>

class Node
{
public:
        Node* left, * right, * parent;
        int key;
        Node(int key) : left(NULL), right(NULL), key(key)
        {
                this->parent = NULL;
        }
};

void insert(Node* N, int key)
{
        if (N->key == key)
                return;
        if (N->key < key)
                if (N->right)
                        insert(N->right, key);
                else
                {
                        N->right = new Node(key);
                        N->right->parent = N;
                }
        else
                if (N->left)
                        insert(N->left, key);
                else
                {
                        N->left = new Node(key);
                        N->left->parent = N;
                }
}

Node* search(Node* N, int key)
{
        if (N == NULL)
                return NULL;
        if (N->key == key)
        {
                return N;
        }
        if (N->key < key)
                return search(N->right, key);
        return search(N->left, key);
}

int height(Node* N)
{
        int l=-1,r=-1;
        if (N->left != NULL)
        l=height(N->left);
        if(N->right != NULL)
        r=height(N->right);
        if (l>r)
                return (l+1);
        else
                return (r+1);
}

void ino(Node* n)
{
        if (n->left != nullptr)
        {
                ino(n->left);
        }
        printf("%d ", n->key);
        if (n->right != nullptr)
        {
                ino(n->right);
        }
}
void pino(Node* n)
{
        printf("%d ", n->key);
        if (n->left != nullptr)
        {
                pino(n->left);
        }
        if (n->right != nullptr)
        {
                pino(n->right);
        }
}
int ctops(Node* n ,int &c)
{
        if (n->parent != nullptr)
        {
                c++;
                ctops(n->parent, c);
        }
        
        
                return c;
        
}

int vle(Node* n, int& c)
{
        if (n->left == nullptr && n->right == nullptr)
        {
                c += n->key;
        }
        if (n->left != nullptr)
        {
                vle(n->left, c);
        }
        if (n->right != nullptr)
        {
                vle(n->right,c);
        }
        return c;
}

int maxv(Node* n, int& c)
{
        if (c < n->key)
        {
                c = n->key;
        }
        if (n->right != nullptr)
        {
                maxv(n->right, c);
        }
        return c;
}

void wtops(Node* n)
{
        if (n != nullptr)
        {
                printf("%d ", n->key);
                wtops(n->parent);
        }
}

int main()
{
        char cmd;
        int key;
        Node* root = NULL, * out;
        int c = 0;

        while (scanf("%c %d", &cmd, &key) > 0)
        {
                if (cmd == 'I')
                        if (root != NULL)
                                insert(root, key);
                        else
                                root = new Node(key);
                else if (cmd == 'S')
                        out = search(root, key);
                else if (cmd == 'H')
                {
                        out = search(root,key);
                        if(out != NULL)
                        {
                                printf("%d \n",height(out));
                        }
                        else
                        {
                                        printf("-\n");
                        }
                }
                else if (cmd == 'D')
                {
                        c = 1;
                        out = search(root, key);
                        if (out != nullptr)
                                printf("%d \n", ctops(out, c));
                        else
                                printf("-\n");
                }
                else if (cmd == 'P')
                {
                        out = search(root, key);
                        if (out != nullptr)
                        {
                                wtops(out);
                                printf("\n");
                        }
                        else
                        {
                                printf("-\n");
                        }
                }
                else if (cmd == 'V')
                {
                        c = 0;
                        out = search(root, key);
                        if (out != nullptr)
                        {
                                printf("%d\n", vle(out, c));
                        }
                        else
                        {
                                printf("-\n");
                        }
                }
                else if (cmd == 'X')
                {
                        c = 0;
                        out = search(root, key);
                        if (out != nullptr)
                        {
                                printf("%d\n", maxv(out, c));
                        }
                        else
                        {
                                printf("-\n");
                        }
                }
                else if (cmd == 'O')
                {
                        out = search(root, key);
                        if (out != nullptr)
                        {
                                ino(out);
                                printf("\n");
                        }
                        else
                        {
                                printf("-\n");
                        }
                }
                else if (cmd == 'E')
                {
                        out = search(root, key);
                        if (out != nullptr)
                        {
                                pino(out);
                                printf("\n");
                        }
                        else
                        {
                                printf("-\n");
                        }
                }
                // tu naleÄąÄ½y dopisaÃâ¡ pozostaÄąâe funkcje
        }
        return 0;
}
