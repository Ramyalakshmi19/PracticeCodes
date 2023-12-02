#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void displayAdjList(list<int> adj_list[], int v) {   for(int i = 0; i<v; i++) {      cout << i << "--->";
      list<int> :: iterator it;
      for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {cout << *it << " ";}
      cout << endl;}}
void add_edge(list<int> adj_list[], int u, int v) {
   adj_list[u].push_back(v);
   //adj_list[v].push_back(u);}
void equation(int vs,int r1, int r2, int r3, int r4)
{    int a1=r1+r2;
    int b1=-r2;
    int c1=vs;
    int a2=r2+r3+r4;
    int b2=-r1;
    int c2=0;
    cout<<"the quation are:"<<endl;
    cout<<a1<<"i1"<<b1<<"i2="<<c1<<"     ----->1"<<endl;
    cout<<a2<<"i1"<<b2<<"i2="<<c2<<"     ----->2"<<endl;
    if ((a1 * b2) - (b1 * a2) == 0){    cout << "The system has no solution." << endl;}
    else{  int x = ((c1*b2) - (b1*c2))/((a1*b2)-(b1*a2));
    int y = ((a1*c2) - (c1*a2)) / ((a1*b2) - (b1*a2));
    cout << "i1=" <<x<<"A"<<endl;
    cout<<"i2=" << y <<"A"<< endl;}}
main(int argc, char* argv[]) {
   int v = 5;
   list<int> adj_list[v];
   add_edge(adj_list, 0, 1);
   add_edge(adj_list, 1, 2);
   add_edge(adj_list, 1, 3);
   add_edge(adj_list, 3, 4);
   add_edge(adj_list, 2, 0);
   add_edge(adj_list, 4, 2);
   displayAdjList(adj_list, v);
   cout<<"total number of mesh is 2."<<endl;
   int vs,r1,r2,r3,r4;
   cout<<"enter the value of voltage source:";
   cin>>vs;
   cout<<"enter the value of resistance between 0 to 1 node in ohms:";
   cin>>r1;
   cout<<"enter the value of resistance between 1 and 2 in ohms:";
   cin>>r2;
   cout<<"enter the value of resistance between 1 and 3 in ohms:";
   cin>>r3;
   cout<<"enter the value of resistance between 3 and 4 in ohms:";
   cin>>r4;
   equation(vs,r1,r2,r3,r4);}
