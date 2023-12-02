#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
    public:
    void fetch()
    {
        fstream file;
        file.open("Employee.txt");
        int n;
        string l;
        cout<<"----------------FETCH THE RANDOM DATA-------------\n";
        cout<<"Enter the position to fetch data:";
        cin>>n;
        file.seekg(n,ios::beg);
        while(getline(file,l))
        {
            cout<<l;
        }
        file.close();
    }
    void replace()
    {
        fstream file;
        file.open("Employee.txt");
        int n;
        string l,data;
        cout<<"\n----------------REPLACE DATA RANDOMLY-------------\n";
        cout<<"Enter the position to replace data:";
        cin>>n;
        file.seekg(n,ios::beg);
        file.write("The data is replaced",43);
        file.close();
    }

};
int main()
{
    Employee E;
    E.fetch();
    E.replace();




}