#include <iostream>
using namespace std;
class EMP
{
private:
    const int Empcode;
    string Empname;
    enum Empdept{Finance,Admin,Tecnical,NonTechnical};

public:
    int code;
    string dept;
    EMP(int code) : Empcode(code)
    {

    }
    void get_data()
    {
        cout << "Enter the Employee Name:";
        cin >> Empname;
        cout << "Enter the Employee Department:";
        cin >> dept;
    }
    void const Show_empcode()
    {
        cout <<"Code:" << Empcode;
        cout<<"\n-----------------------------------------\n";
    }
    void put_data()
    {
        cout << "Name:" << Empname;
        cout << "\nDepartment:"<<dept<<endl;
        
    }
};
int main()
{
    int num,id;
    cout << "Enter the number of employees:";
    cin >> num;
    EMP *emparr[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"--------------EMPLOYEE"<<(i+1)<<"-----------------\n";
        cout<<"Enter the ID:";
        cin>>id;
        emparr[i]=new EMP(id);
        emparr[i]->get_data();
    }
    cout<<"\n\n\n----------------------EMPLOYEE DETAILS-----------------------\n";
    for(int i=0;i<num;i++)
    {
        emparr[i]->put_data();
        emparr[i]->Show_empcode();    
    }
}