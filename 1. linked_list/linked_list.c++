#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

/*
    This below function is used to get the
    legth ( or number of nodes/elements)
    in the Linked list
*/
int findLength(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}

Node *Insert(Node *head, int x)
{

    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}

void Print(Node *head)
{
    // Node *temp = head;
    cout << "List is :" << endl;
    while (head != NULL)
    {
        /* code */
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    int i, n, x;

    cout << "How many numbers you want : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the number : ";
        cin >> x;

        head = Insert(head, x);
        Print(head);
    }

    cout << "The total elements in the linked list = " << findLength(head) << endl;
}