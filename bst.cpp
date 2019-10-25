#include<iostream>
#include<stdlib.h>
using namespace std;

#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
 int item;
 struct node * left;
 struct node * right;
};
struct node * root=NULL;
struct node * insbst(struct node * root, int k) {
 struct node * ptr;
 struct node * save;
 struct node * newp;
 newp=(struct node *)malloc(sizeof(struct node));
 newp->item=k;
 newp->left=NULL;
 newp->right=NULL;
 ptr=root;
 
 if (root==NULL) {
  root=newp;
 }
 else {
  while (ptr!=NULL) {
   save=ptr;
   if (k>ptr->item) {
    ptr=ptr->right;
   }
   else {
    ptr=ptr->left;
   }
  }
  if (k>save->item) {
   save->right=newp;
  }
  else {
   save->left=newp;
  }
 }
 return root;
}

void findnode(int k) {
 struct node * ptr;
 ptr=root;
 
 while (ptr!=NULL) {
  if (k==ptr->item) {
   cout << "The item "<< k << " is found\n";
   return;
  }
  else if (k>ptr->item) {
   ptr=ptr->right;
  }
  else {
   ptr=ptr->left;
  }
 }
 if (ptr==NULL) {
  cout << "The item is not present in the BST\n";
 }
}

int main()
{
 int opt, k, f;
 
 do {
  cout << "Enter your option\n1. Create the Binary Search Tree\n2. Find a number in BST\n3. Exit\n";
  cin >> opt;
  switch (opt) {
   case 1:
    do {
     cout << "Enter the no. to store in the BST (-1 to stop)\n";
     cin >> k;
     root=insbst(root, k);
    }while (k!=-1);
   break;
   case 2:
    cout << "Enter the number to find in BST\n";
    cin >> f;
    findnode(f);
   break;
  }
 }while (opt!=3); 
}
