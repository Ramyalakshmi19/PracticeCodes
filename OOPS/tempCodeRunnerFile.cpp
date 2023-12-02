#include<iostream>
using namespace std;
class student
{
    public:
        int register_num,result;
        string name;
        float marks[4];
        float average;
        student()
        {
            cout<<"-----------------STUDENT"<<"--------------------\n";
            cout<<"Enter the name:";
            cin>>name;
            cout<<"Enter the reg_no:";
            cin>>register_num;
            for(int i=0;i<4;i++)
            {
                cout<<"Enter the mark-"<<i+1<<":";
                cin>>marks[i];
            }
        }
        int display_data()
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
                result=0;
            }
            else
            {
                cout<<name<<"\t\t"<<register_num<<"\t\t"<<marks[0]<<"\t\t"<<marks[1]<<"\t\t"<<marks[2]<<"\t\t"<<marks[3]<<"\t\t"<<average<<"\t\t"<<"PASS\n";
                result=1;
            }
           
        }
        ~student()
        {
            if(result==1)
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
    cout<<"\v\vNAME\t\t"<<"REG NO\t\t"<<"MARK 1\t\t"<<"MARK 2\t\t"<<"MARK 3\t\t"<<"MARK 4\t\t"<<"AVERAGE\t\t"<<"RESULT\n\n";
    cout<<"____________________________________________________________________________________________________________________\n\n";
    for(int i=0;i<num;i++)
    {
        int result=s[i].display_data();
        
    }
    cout<<"\n\n Table after removing failed students";
    cout<<"\n\v\vNAME\t\t"<<"REG NO\t\t"<<"MARK 1\t\t"<<"MARK 2\t\t"<<"MARK 3\t\t"<<"MARK 4\t\t"<<"AVERAGE\t\t"<<"RESULT\n\n";
    cout<<"____________________________________________________________________________________________________________________\n\n";
    for(int i=0;i<num;i++)
    {
        if(s[i].result==0)
        {
            s[i].~student();
        }
    }
    
}