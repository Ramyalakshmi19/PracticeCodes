#include<iostream>
using namespace std;
class palindrome{
    public:

    int palin(int a){
        int k=0,rev=0;
        while(a!=0){
             k=a%10;
             rev=(rev*10)+k;
             a=a/10;

        }
        cout<<rev<<endl;
        return(rev);

    }
    void palin(string s){
        int flag=0;
        int j=s.length()-1;

        for(int i=0;i<(s.length()-1)/2;i++){

            if(s[i]==s[j]){
                    j=j-1;
                continue;

            }
            else{
                cout<<"not palindrome"<<endl;
                return;

            }

        }
        cout<<"it is a palindrome"<<endl;
    }


};
int main(){
    int n;
    string s;
    cout<<"enter the number:"<<endl;
    cin>>n;
    palindrome k;
    int result=k.palin(n);
    cout<<result;
    if(result==n){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"it is not a palindrome"<<endl;
    }
    cout<<"enter the string:"<<endl;
    cin>>s;
    k.palin(s);

}