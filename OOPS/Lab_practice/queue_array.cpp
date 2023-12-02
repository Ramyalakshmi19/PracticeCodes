#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
typedef struct node node;
class queue
{
    public:
        node* front=NULL;
        node* rear=NULL;
        void enqueue(int data)
        {
            node* new_node=(node*)malloc(sizeof(node));
            new_node->data=data;
            if(front==NULL)
            {
                new_node->next=NULL;
                front=rear=new_node;
            }
            else
            {
                rear->next=new_node;
                new_node->next=NULL;
            }
        }
        void display()
        {
            node* temp=front;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
};
int main()
{
    queue q;
    q.enqueue(1);
    
}