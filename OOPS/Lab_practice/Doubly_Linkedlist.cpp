#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node* prev;
};
typedef struct node node;
class linked_list
{
    public:
        node* head=NULL;
        node* prev=NULL;
        void insert_beg(int num)
        {
            node *new_node = (node *)malloc(sizeof(node));
            new_node->data = num;
            if(head==NULL)
            {
                head=new_node;
                new_node->prev=new_node->next=NULL;
            }
            else
            {
                head->prev=new_node;
                new_node->next=head;
                new_node->prev=NULL;

                head=new_node;
            }
        }
        void insert_pos(int num,int pos)
        {
            node*  temp=head;
            node*  curr=head->next;
            node* new_node = (node *)malloc(sizeof(node));
            new_node->data = num;
            if(head==NULL)
            {
                cout<<"List is empty\n";
            }
            else
            {
                for(int i=0;i<pos-2;i++)
                {
                    curr=curr->next;
                    temp=temp->next;
                }
                new_node->prev=curr->prev;
                new_node->next=temp->next;
                curr->prev=new_node;
                temp->next=new_node;
            }
        }
        void insert_end(int num)
        {
            node* temp=head;
            node* new_node = (node *)malloc(sizeof(node));
            new_node->data = num;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            new_node->next=NULL;
            new_node->prev=temp;
            temp->next=new_node;
        }
        void delete_beg()
        {
            node* temp=head;
            head=temp->next;
            (temp->next)->prev=NULL;
            free(temp);
        }
        void delete_pos(int pos)
        {
            node* temp=head;
            node* curr=head->next;
            for(int i=0;i<pos-2;i++)
            {
                temp=temp->next;
                curr=curr->next;
            }
            temp->next=curr->next;
            (curr->next)->prev=curr->prev;
        }
        void delete_end()
        {
            node* curr=head;
            node* temp=head->next;
            while(temp->next!=NULL)
            {
                temp=temp->next;
                curr=curr->next;
            }
            curr->next=NULL;
            free(temp);
        }
        void display()
        {
            node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
};
int main()
{
    linked_list list;
    list.insert_beg(100);
    list.insert_beg(555);
    list.insert_beg(45);
    list.insert_beg(90);
    list.insert_pos(1989,3);
    list.insert_end(9876);
    list.display();
    cout<<"\n--------------------------\n";
    list.delete_beg();
    list.delete_pos(3);
    list.delete_end();
    list.display();

}
