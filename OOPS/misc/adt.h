#include <iostream>
using namespace std;
class student
{
  public:
    int reg_no,mark1,mark2,mark3,mark4,average;
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
            // f="pass";
            cout<<name<<"    "<<reg_no<<"      "<<average<<"     "<<"Pass\n";
        }
        else
        {
           // f="fail";
            cout<<name<<"    "<<reg_no<<"      "<<average<<"     "<<"Fail\n";
        } 
    }
 };
 int main()
 {
    student s;
    cout<<"Name  "<<"Reg_no  "<<"Avg  "<<"Grade\n";
    s.show_details();
 }