#include<iostream>
using namespace std;
class Student
{
public:
    int Register_no;
    void get_number()
    {
        cout<<"Enter the Register number:";
        cin>>Register_no;
    }
    void putnumber()
    {
        cout<<"REGISTER NO:"<<Register_no<<endl;
    }
};
class Test:public virtual Student
{
public:
    float English,Tamil,Math,Science;
    void get_mark()
    {
        cout<<"Enter the marks:"<<endl;
        cout<<"TAMIL:";
        cin>>Tamil;
        cout<<"ENGLISH:";
        cin>>English;
        cout<<"MATHS:";
        cin>>Math;
        cout<<"SCIENCE:";
        cin>>Science;
    }
    void put_mark()
    {
        cout<<"MARKS:";
        cout<<"Tamil:"<<Tamil<<endl;
        cout<<"English:"<<English<<endl;
        cout<<"Maths:"<<Math<<endl;
        cout<<"Science:"<<Science<<endl;
    }
};
class sports:public virtual Student
{
public:
    float score;
    void get_score()
    {
        cout<<"Enter the Score:";
        cin>>score;
    }
    void put_score()
    {
        cout<<"SCORE:"<<score<<endl;
    }
};
class Result:public Test,public sports
{
public:
    int total;
    void display()
    {
        total=(Tamil+English+Math+Science)+score;
        cout<<"Total Score of the student:"<<total;
    }
};
int main()
{
    Result R;
    R.get_number();
    R.get_mark();
    R.get_score();
    cout<<"--------------------------------"<<endl;
    R.putnumber();
    R.put_mark();
    R.put_score();
    R.display();

}
