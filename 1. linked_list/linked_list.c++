#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

// struct Node *head; // global variable ; can be accessed anywhere

Node* Insert(Node* head, int x)
{

    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}


void Print(Node* head)
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
}