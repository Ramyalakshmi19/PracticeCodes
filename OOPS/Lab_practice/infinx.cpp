#include<iostream>
#include <stack>
using namespace std;
class stack
{
    public:
        int prec(char c)
        {
            if(c=='^')
                return 3;
            else if(c=='*'|| c=='/')
                return 2;
            else if(c=='+'||C=='-')
                return 1;
            else
                return -1;
        }
};
void eval(string s)
{ 
    stack<char> mystack;
    mys
    string result;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        if(s[i]=='(')
            s.top();
        
    }
}
int main()
{

}