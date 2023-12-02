#include<iostream>
using namespace std;
class employee
{
    private:
        string emp_name;
        int emp_id;
    public:
    void get_data()
    {
        cout<<"Enter the employee name:";
        cin>>emp_name;
        cout<<"Enter the employee id:";
        cin>>emp_id;
    }
    void disp_data()
    {
        cout<<"Entered details:\n";
        cout<<emp_name<<" "<<emp_id<<endl;
    }
}; 
int main()     //dynamic memory for objects
{
    int num;
    cout<<"Enter the number of employees:";
    cin>>num;
    employee* ptr_object=new employee[num];
    for(int i=0;i<num;i++)
    {
        ptr_object->get_data();
        ptr_object->disp_data();

    }
    
    delete[] ptr_object;
}