#include <iostream>
using namespace std;
class student
{
  public:
    int reg_no,mark1,mark2,mark3,mark4,average,res;
    string name;
    student()
    {
        cout<<"Enter register no:";
        cin>>reg_no;
        cout<<"Enter mark1:";
        cin>>mark1;
        cout<<"Enter mark2:";
        cin>>mark2;
        cout<<"Enter mark3:";
        cin>>mark3;
        cout<<"Enter mark4:";
        cin>>mark4;
        cout<<"Enter name:";
        cin>>name;
    }
    void show_details()
    {
        average=(mark1+mark2+mark3+mark4)/4;
        if(average>=50)
        {
            res=1;
            cout<<name<<"    "<<reg_no<<"      "<<average<<"     "<<"Pass\n";
        }
        else
        {
            res=0;
            cout<<name<<"    "<<reg_no<<"      "<<average<<"     "<<"Fail\n";
        } 
    }
    ~student()
    {
        cout<<"Destructed";
    }
 };
 int main()
 {
    int n;
    cout<<"Enter no of students:";
    cin>>n;
    student s[n];
    cout<<"Name  "<<"Reg_no  "<<"Avg  "<<"Grade\n";
    for(int i=0;i<n;i++)
    {
        s[i].show_details();
        if(s[i].res==0)
        {
            s[i].~student();   
        }
    }
    for(int j=0;j<n;j++)
    {
        s[j].show_details();
    }
 }