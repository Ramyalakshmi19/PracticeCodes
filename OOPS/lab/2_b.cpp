#include<iostream>
using namespace std;
class Date
{
    public:
    int M_Year;
    int M_Month;
    int M_Day;
    Date(int year,int month,int day)
    {
        set_date(year,month,day);
    }
    void set_date(int y,int m,int d)
    {
        M_Year=y;
        M_Month=m;
        M_Day=d;
    }
    void get_year()
    {
        cout<<M_Year<<endl;
    }
    void get_month()
    {
        cout<<M_Month<<"/";
    }
    void get_day()
    {
        cout<<M_Day<<"/";
    }
    void print_Date(Date d1)
    {
        cout<<"Date Entered:";
        d1.get_day();
        d1.get_month();
        d1.get_year();
    }
};
class Time
{
    public:
    int Hour;
    int minute;
    int second;
    Time(int hr,int min,int sec)
    {
        set_time(hr,min,sec);
    }
    void set_time(int h,int m,int s)
    {
        Hour=h;
        minute=m;
        second=s;
    }
    void get_hour()
    {
        cout<<Hour<<":";
    }
    void get_minute()
    {
        cout<<minute<<":";
    }
    void get_second()
    {
        cout<<second;
    }
    void print_Time(Time t1)
    {
        cout<<"Time Entered:";
        t1.get_hour();
        t1.get_minute();
        t1.get_second();
    }
};
int main()
{
    int Day,Mon,Yr;
    int Hr,Min,Sec;
    cout<<"--------------DATE------------------\n";
    cout<<"Enter the Day:";
    cin>>Day;
    cout<<"Enter the Month:";
    cin>>Mon;
    cout<<"Enter the Year:";
    cin>>Yr;
    cout<<"-------------TIME-------------------\n";
    cout<<"Enter the Hour:";
    cin>>Hr;
    cout<<"Enter the Minute:";
    cin>>Min;
    cout<<"Enter the Second:";
    cin>>Sec;
    Date d1(Yr,Mon,Day);
    Time t1(Hr,Min,Sec);
    d1.print_Date(d1);
    t1.print_Time(t1);
}