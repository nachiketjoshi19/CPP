#include <iostream>
using namespace std;

class tree{
  private:
  struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data)
{
  struct node *node;
  node =new struct node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return (node);
}

void traversePreOrder(struct node *t)
{
  if (t != NULL)
  {
    cout<<t->data<<" ";
    traversePreOrder(t->left);
    traversePreOrder(t->right);
  }
}
void traverseInOrder(struct node *t)
{
  if (t != NULL)
  {
    traverseInOrder(t->left);
    cout<<t->data<<" ";
    traverseInOrder(t->right);
  }
}
void traversePostOrder(struct node *t)
{
  if (t != NULL)
  {
    traversePostOrder(t->left);
    traversePostOrder(t->right);
    cout<<t->data<<" ";
  }
}
public:
void run(){
  struct node *root = newNode(1);

  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);

  cout<<"The preorder traversal of the tree is: ";
  traversePreOrder(root);
  cout<<endl<<"The inorder traversal of the tree is: ";
  traverseInOrder(root);
  cout<<endl<<"The postorder traversal of the tree is: ";
  traversePostOrder(root);
}
};

int main()
{
  tree a;
  a.run();
}