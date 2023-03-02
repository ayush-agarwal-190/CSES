void removeDUplicateLL(struct Node* head)
{
    Node* curr=head;
    Node* next_next;

    if(curr==NULL)
    return ;

    while(curr->next)
    {
        if(curr->data==curr->next->data)
        {
            next_next=curr->next->next;
            free(curr->next);
            curr->next=next_next;
        }
        else
        {
            curr=curr->next;
        }
    }

}