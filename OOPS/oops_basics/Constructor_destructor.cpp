#include<iostream>
using namespace std;
class student
{
    public:
         string Department;
         string section;
         int Roll_num;
         student(string set_dept,string set_sec,int set_rollnum) //parameterised constructor
         {
            Department=set_dept;
            section=set_sec;
            Roll_num=set_rollnum;
         }
         void display()
         {
            cout<<"Details of Student:"<<endl;
            cout<<"\nRoll Number:"<<Roll_num<<endl;
            cout<<"Department:"<<Department<<endl;
            cout<<"Section:"<<section;
            cout<<"\n------------------------\n";
         }
         ~student()     //destructor- must not have any arguments
         {
                cout<<"ALL THE BEST!\n";
         }
};
int main()
{
    student s1("CSE","A",045); //pass arguments to constructor
    student s2("EEE","B",072);
    s1.display();
    s2.display();
    return 0;

}
