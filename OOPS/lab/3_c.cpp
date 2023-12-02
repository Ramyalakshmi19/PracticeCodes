#include<iostream>
using namespace std;
class date
{
    public:
    int day,month,year;
    static const int days_month[13];
    friend bool isleapyear(date);
    date(int d=0,int m=0,int y=0)
    {
        day=d;
        month=m;
        year=y;
    }
    bool valid_date()
    {
        if(day>0 && day<=days_month[month] && month>0 && month<13)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    date operator + (date &d)
    {
        date final;
        int  offset2,i;
        int offset1=day;
        switch (month - 1)
        {
        case 11:
            offset1 += 30;
        case 10:
            offset1 += 31;

        case 9:
            offset1 += 30;

        case 8:
            offset1 += 31;

        case 7:
            offset1 += 31;

        case 6:
            offset1 += 30;

        case 5:
            offset1 += 31;

        case 4:
            offset1 += 30;

        case 3:
            offset1 += 31;

        case 2:
            if((year%100!=0 && year%4==0 || year%400==0)  && month>2)
            {
                offset1+=29;
            } 
            else
            {
                offset1 += 28;
            }
        case 1:
            offset1 += 31;
        }
        int remDays = (year%100!=0 && year%4==0 || year%400==0)?(366-offset1):(365-offset1);
        if (d.day <= remDays)
        {
            d.year = year;
            offset2 = offset1 + d.day;
        }
        else
        {

            d.day-= remDays;
            d.year = year + 1;
            int y2days =  (d.year%100!=0 && d.year%4==0 || d.year%400==0)? 366 : 365;
            while (d.day >= y2days)
            {
                d.day -= y2days;
                d.year++;
                y2days = (d.year%100!=0 && d.year%4==0 || d.year%400==0) ? 366 : 365;
            }
            offset2 = d.day;
        } 
        for (i = 1; i <= 12; i++)
        {
            int num_days=days_month[i];
            if(i==2 && d.year%100!=0 && d.year%4==0 || d.year%400==0 )
            {
                num_days=29;
            }
            if (offset2 <= num_days)
                break;
            offset2 = offset2 - num_days;
        }
        final.year=d.year;
        final.day=offset2;
        final.month=i;
        return final;
    }
};
const int date::days_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
bool isleapyear(date d)
{
    if (d.year%100!=0 && d.year%4==0 || d.year%400==0) 
    {
        return true;
    } 
    else
    {
        return false;
    }
}
int main()
{
    int d,m,y,num;
    cout<<"Enter the day:";
    cin>>d;
    cout<<"Enter the month:";
    cin>>m;
    cout<<"Enter the year:";
    cin>>y;
    cout<<"-------------------------\n";
    cout<<"Enter the number of days to increment:";
    cin>>num;
    date d1(d,m,y);
    date d2(num);
    int check=d1.valid_date();
    if(check)
    {
        
        date d3=d1+d2;
        cout<<"Incremented Date:";
        cout<<d3.day<<"/";
        cout<<d3.month<<"/";
        cout<<d3.year;
    }
    else
    {
        cout<<"Invalid input";
    }
}