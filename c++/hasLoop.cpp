bool hasLoop()
{
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}