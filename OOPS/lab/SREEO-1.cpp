#include<iostream>
using namespace std;
class student
{
    public:
        int register_num;
        string name,result;
        float marks[4];
        float average;
        void get_data()
        {
            cout<<"Enter the name:";
            cin>>name;
            cout<<"Enter the register number:";
            cin>>register_num;
            for(int i=0;i<4;i++)
            {
                cout<<"Enter the mark-"<<i+1<<":";
                cin>>marks[i];
            }
        }
        void display_data()
        {
            average=0;
            for(int i=0;i<4;i++)
            {
                average+=marks[i];
            }
            average/=4;
            if(average<50)
            {
                cout<<name<<"\t\t"<<register_num<<"\t\t"<<marks[0]<<"\t\t"<<marks[1]<<"\t\t"<<marks[2]<<"\t\t"<<marks[3]<<"\t\t"<<average<<"\t\t"<<"FAIL\n";
            }
            else
            {
                cout<<name<<"\t\t"<<register_num<<"\t\t"<<marks[0]<<"\t\t"<<marks[1]<<"\t\t"<<marks[2]<<"\t\t"<<marks[3]<<"\t\t"<<average<<"\t\t"<<"PASS\n";
            }
           
        }
};
int main()
{
    int num;
    cout<<"Enter the number of students:";
    cin>>num;
    student s[num];
    for(int i=0;i<num;i++)
    {
        cout<<"-----------------STUDENT-"<<i+1<<"--------------------\n";
        s[i].get_data();
    }
    cout<<"\v\vNAME\t\t"<<"REG NO\t\t"<<"MARK 1\t\t"<<"MARK 2\t\t"<<"MARK 3\t\t"<<"MARK 4\t\t"<<"AVERAGE\t\t"<<"RESULT\n\n";
    cout<<"______________________________________________________________________________________________________________________\n\n";
    for(int i=0;i<num;i++)
    {
        s[i].display_data();
    }
}