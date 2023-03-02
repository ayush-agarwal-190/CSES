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










struct Node* newNode(int key)
{
    struct Node* temp
        = (struct Node*)malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = NULL;
    return temp;
}
 
// Driver Code
int main()
{
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
 
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next;
 
    cout << countNodesinLoop(head) << endl;
 
    return 0;
}
