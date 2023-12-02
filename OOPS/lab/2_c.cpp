#include<iostream>
using namespace std;
class Student
{
    public:
    static int count;
    int id;
    Student()
    {
        count++;
    }
    void show_total_students()
    {
        cout<<"Total Students in the class:"<<count;
    }
    int get_total_students()
    {
        return count;
    }
    void show_studentid(int ID)
    {
        id=ID;
        cout<<"ID:"<<id<<endl;
        
    }
};
int Student::count=0;
int main()
{
    int ch=1,num=0,ID;
    while(ch==1)
    {
        Student *s=new Student;
        cout<<"Enter the Student ID:";
        cin>>ID;
        s->show_studentid(ID);
        num=s->get_total_students();
        cout<<"Do you want to continue?(1/0)";
        cin>>ch;
        cout<<"-------------------------------------------\n";
    }
    cout<<"Total Number of Students in the Class:"<<num;
}