#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

void middleofll (Node* head, int num)
{
    Node* temp = head;
    int i = 1;

    //Finding the Middle Element
    if (num % 2 == 0)
    {
        while (i < (num / 2))
        {
            temp = temp -> next;
            i++;
        }
    }
    else
    {
        while (i <= (num / 2))
        {
            temp = temp -> next;
            i++;
        }
    }
    cout << "The Middle of the Linked List is " << temp -> data;
}
int main()
{
    Node* head;
    Node* curr = new Node();
    int num;

    cout << "Enter the number of nodes: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        Node* after = new Node();
        if (i == 1)
        {
            head = curr;
            cout << "Enter the value of the node: ";
            cin >> curr -> data;
            curr -> next = after;
            curr = curr -> next;
        }
        else
        {
            cout << "Enter the value of the node: ";
            cin >> curr -> data;
            if (i != num)
            {
                curr -> next = after;
                curr = curr -> next;
            }
            else
                curr -> next = NULL;
        }
    }
    if (num <= 1)
        {
            if (num == 1)
            {
               cout << "Element: " << head -> data;
               exit(0);
            }
            else
            {
                cout << "No elements in the Linked List!";
                exit(0);
            }
        }

    middleofll(head, num);
}

