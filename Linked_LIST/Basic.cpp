#include <bits/stdc++.h>
using namespace std;

// Link list Node


struct Node{
int data;
struct Node * next;
};


// Push value in linked list

void push(struct Node** ref , int val)
{
    struct Node *node= new Node();
    node->data=val;
    node->next=*ref;
    *ref=node;

}

