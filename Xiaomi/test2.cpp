#include <iostream>
using namespace std;

struct Node
{
    int elem = 0;
    Node *next = nullptr;
    Node(int val){ elem = val;}
};

int main()
{
    int n = 0;
    cin >> n;
    Node *ptr = new Node(1);
    Node *head = ptr;
    for(int i =2; i<=n; ++i)
    {
        ptr->next = new Node(i);
        ptr = ptr->next;
    }
    ptr -> next = head;
    
    while (ptr->next != ptr)
    {
        Node *temp = ptr;
        for (int i = 0; i < 3; ++i)
        {
            temp = temp->next;
        }
        ptr->next->next->next = temp->next;
        ptr = ptr->next->next;
        temp->next = nullptr;
    }
    cout << ptr->elem << endl;

    return 0;
}