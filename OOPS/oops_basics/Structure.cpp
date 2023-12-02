#include<iostream>
using namespace std;
struct employee
{
    public:
        int emp_id;
        string emp_name;
        string emp_dept;
    employee(int ID,string NAME,string DEPT)
    {
        emp_id=ID;
        emp_name=NAME;
        emp_dept=DEPT;
    }
    void display()
    {
        cout<<emp_id<<" "<<emp_name<<" "<<emp_dept;
        cout<<"\n---------------------------------\n";
    }
};
int main()
{
    struct employee e1(2110608,"A","Developer");
    e1.display();
}