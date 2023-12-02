#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
    private:
        int empid;
        int j_date,j_month,j_year;
        int b_date,b_month,b_year;
        string empname,designation;
    public:

        void get_data()
        {
            cout<<"EMPLOYEE ID:";
            cin>>empid;
            cout<<"NAME:";
            cin>>empname;
            cout<<"DESIGNATION:";
            cin>>designation;
            cout<<"-------JOINING DATE----------\n";
            cout<<"DAY:";
            cin>>j_date;
            cout<<"Month:";
            cin>>j_month;
            cout<<"YEAR:";
            cin>>j_year;
            cout<<"-------BIRTH DATE----------\n";
            cout<<"DAY:";
            cin>>b_date;
            cout<<"Month:";
            cin>>b_month;
            cout<<"YEAR:";
            cin>>b_year;
        }
        void put_data()
        {
            ofstream out;
            out.open("Employee.txt");
            out<<empid<<"\t"<<empname<<"\t"<<designation<<"\t"<<j_date<<"-"<<j_month<<"-"<<j_year;
            out<<"\t"<<b_date<<"-"<<b_date<<"-"<<b_year;
            out.close();
        }
        void show_empid()
        {
            string l;
            cout<<"ID\t"<<"Name\t"<<"Desig\t\t"<<"DOJ\t\t"<<"DOB"<<endl;
            ifstream file_out;
            file_out.open("Employee.txt");
            while(getline(file_out,l))
            {
                cout<<l;
            }
        }

};
int main()
{
    Employee E;
    E.show_empid();


}