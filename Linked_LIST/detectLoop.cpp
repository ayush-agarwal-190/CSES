bool detectLoop(struct Node* head)
{

    unordered_set<Node*> s;
    while(head)
    {
        if(s.find(head)!=s.end())
        return true;

        s.insert(head);
        head=head->next;

    }
    return false;
}