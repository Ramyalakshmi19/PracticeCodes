#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
typedef struct node node;
class linked_list
{
    public:
        node* head=NULL;
        void insert_beg(int num)
        {
            node* new_node=(node*)malloc(sizeof(node));
            new_node->data=num;
            if(head==NULL)
            {
                head=new_node;
                head->next=head;
            }
            else
            {
                node* temp=head;
                while(temp->next!=head)
                {
                    temp=temp->next;
                }
                new_node->next=head;
                head=new_node;
                temp->next=head;
                
            }
        }
        void insert_pos(int pos,int num)
        {
            node* temp=head;
            node* new_node=(node*)malloc(sizeof(node));
            new_node->data=num;
            for(int i=0;i<pos-2;i++)
            {
                temp=temp->next;
            }
            new_node->next=temp->next;
            temp->next=new_node;
        }
        void insert_end(int num)
        {
            node* temp=head;
            node* new_node=(node*)malloc(sizeof(node));
            new_node->data=num;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=new_node;
            new_node->next=head;
        }
        void delete_beg()
        {
            node* temp=head;
            node* curr=head;
            head=head->next;
            while(curr->next!=temp)
            {
                curr=curr->next;
            }
            curr->next=head;
            free(temp);
        }
        void delete_pos(int pos)
        {
            
            node* prev=head;
            node* curr=head->next;
            for(int i=0;i<pos-2;i++)
            {
                prev=prev->next;
                curr=curr->next;
            }
            prev->next=curr->next;
            free(curr);
        
        }
        void delete_end()
        {
            node* prev=head;
            node* curr=head->next;
            while(curr->next!=head)
            {
                curr=curr->next;
                prev=prev->next;
            }
            prev->next=head;
            free(curr);
    
        }
        void display()
        {
            node* temp=head;
            do
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }while(temp!=head);
        }
};
int main()
{
    linked_list list;
    list.insert_beg(20);
    list.insert_beg(900);
    list.insert_beg(999);
    list.insert_pos(2,1);
    list.insert_end(1234);
    list.display();
    cout<<"\n-------------------\n";
    list.delete_beg();
    list.delete_pos(3);
    list.delete_end();
    list.display();

}