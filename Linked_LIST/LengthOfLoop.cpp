int lengthLL(struct Node* head)
{
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}

int lengthLOOP(struct Node* head)
{
    struct Node* slow=head, *fast=head;

    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            return lengthLL(slow);
        }
    }
}
