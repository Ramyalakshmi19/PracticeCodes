#include <iostream>
using namespace std;
class student{
  public:
    int reg_no,mark1,mark2,mark3,mark4;
    string name,f;
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
    void show_details(){
        int average;
        average=(mark1+mark2+mark3+mark4)/4;
        if(average>=50){
            // f="pass";
            cout<<name<<"    "<<reg_no<<"      "<<average<<"     "<<"Pass\n";
        }
        else{
           // f="fail";
            cout<<name<<"    "<<reg_no<<"      "<<average<<"     "<<"Fail\n";
        }
        
    }
    
};
int main(){
    int n;
    cout<<"Enter no of students:";
    cin>>n;
    student a[n];
    cout<<"Name  "<<"Reg_no  "<<"Avg  "<<"Grade\n";
    for(int j=0;j<n;j++){
        a[j].show_details();
        if(a[j].f=="fail"){
            a[j].~student();
            
        }
    }
    cout<<"After removing the students who failed\n";
    cout<<"Name"<<"   "<<"Reg_no"<<"   "<<"Avg"<<"   "<<"Grade\n";
    for(int i=0;i<n;i++){
        
        a[i].show_details();
    }
   
}