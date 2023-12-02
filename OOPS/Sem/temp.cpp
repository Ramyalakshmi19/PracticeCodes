#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
typedef struct node node;
class polynomial
{
    public:
        node* head=NULL;
        void insert_beg(int data)
        {
            node* new_node=(node*)malloc(sizeof(node));
            new_node->data=data;
            new_node->next=NULL;
            if(head==NULL)
            {
                head=new_node;
            }
            else
            {
                new_node->next=head;
                head=new_node;
            }
        }
        void add(node* ptr1,node* ptr2)
        {
            while(ptr1!=NULL)
            {
                cout<<(ptr1->data)+(ptr2->data)<<endl;
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
        }
        void display()
        {
            node* temp=head;
            while (temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            
        }


};
int main()
{
    polynomial p1;
    polynomial p2;
    p1.insert_beg(5);
    p1.insert_beg(4);
    p1.insert_beg(3);
    p1.insert_beg(2);
    p2.insert_beg(50);
    p2.insert_beg(40);
    p2.insert_beg(30);
    p2.insert_beg(20);
    p1.display();
    cout<<endl;
    p2.display();
    cout<<endl;
    node* ptr1=p1.head;
    node* ptr2=p2.head;
    p1.add(ptr1,ptr2);

}