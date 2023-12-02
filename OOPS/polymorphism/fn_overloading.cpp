#include<iostream>
using namespace std;
class operate
{
    public:
        void display(int a)
        {
            cout<<"CUT-OFF:"<<a<<endl;
        }
        void display(string str)
        {
            cout<<"YOUR DETAILS";
            cout<<"-----------------------------------------\n";
            cout<<"NAME:"<<str<<endl;
        }
        void display(int a,int b)
        {
            cout<<"ROLL NUMBER:"<<a<<endl;
            cout<<"DIGITAL ID:"<<b<<endl;
        }
};
int main()
{
    int roll_num,dig_id,cut_off;
    string name;
    operate s1;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your roll num:";
    cin>>roll_num;
    cout<<"Enter your digital id:";
    cin>>dig_id;
    cout<<"Enter your cut-off:";
    cin>>cut_off;
    s1.display(name);
    s1.display(cut_off);
    s1.display(roll_num,dig_id);
}