#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int c=0;
    string s;
    ifstream file;
    file.open("New.txt");
    while(getline(file,s))
    {
        cout<<s;
         c+=1;
    }
    cout<<c;

}