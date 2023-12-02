#include<iostream>
using namespace std;
class base
{
    public:
        void display()
        {
            cout<<"BASE CLASS\n";
        }
};
class derived:public base
{
    public:
        void display()
        {
            cout<<"DERIVED CLASS\n";
        }
};
/*int main()
{
    derived d1;
    d1.display();     //display fn is overrided
}*/
/*int main()
{
    derived d1;
    d1.base::display();     //using scope resolution operator
    d1.display();
}*/
int main()
{
    base *b1,b2;     //using pointer object
    derived d1;
    b1=&b2;
    b1->display();
    d1.display();

}