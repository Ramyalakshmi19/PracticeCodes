#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
typedef struct node node;
class linked_list
{
public:
    node *head = NULL;
    void insert_beg(int num)
    {
        node *new_node = (node *)malloc(sizeof(node));
        new_node->data = num;
        if (head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
        }
        else
        {
            new_node->next = head;
            head = new_node;
        }
    }
    void insert_at_pos(int pos, int num)
    {
        node *new_node = (node *)malloc(sizeof(node));
        new_node->data = num;
        if (head == NULL)
        {
            cout << "List is empty\n";
        }
        else
        {
            node *temp = head;
            for (int i = 0; i < pos - 2; i++)
            {
                temp = temp->next;
            }
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }
    void insert_end(int num)
    {
        node *new_node = (node *)malloc(sizeof(node));
        node *temp = head;
        new_node->data = num;
        if (head == NULL)
        {
            cout << "List is empty\n";
        }
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = NULL;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
    void delete_beg()
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
        }
        node *temp = head;
        head = temp->next;
        free(temp);
    }
    void delete_pos(int pos)
    {
        node* prev=head;
        node* curr=prev->next;
        for(int i=0;i<pos-2;i++)
        {
            curr=curr->next;
            prev=prev->next;
        }
        prev->next=curr->next;
        free(curr);
    }
    void delete_end()
    {
        node* prev=head;
        node* curr=prev->next;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            prev=prev->next;
        }
        prev->next=NULL;
        free(curr);
    }
    void reverse()
    {
        node* curr=head;
        node* prev=NULL;
        node* next=NULL;
        while (curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        display();
        
    }
};
int main()
{
    linked_list list;
    list.insert_beg(2);
    list.insert_beg(21);
    list.insert_beg(221);
    list.insert_beg(777);
    list.insert_at_pos(3, 2000);
    list.insert_end(900);
    list.display();
    list.delete_beg();
    cout << "\n-------------------------\n";
    list.display();
    cout << "\n-------------------------\n";
    list.delete_pos(3);
    list.display();
    cout << "\n-------------------------\n";
    list.delete_end();
    list.display();
}