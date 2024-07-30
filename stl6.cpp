#include<iostream>
#include<set>

using namespace std;

int main()
{
    set <int> s ;
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(0);
      s.insert(1);
      s.insert(12);
      s.insert(11);
//against of int auto can be used
for(int i:s)
{
    cout<<i<<endl;

}

s.erase(s.begin());
for(int i:s)
{
    cout<<i<<endl;

}

set<int>::iterator it = s.begin() ;
it++;

s.erase(it);

for(auto i:s)
{
    cout<<i<<endl;

}

cout<<endl;

cout<<"check if 2 is their or not so the reply is "<< s.count(2)<<endl;


//funcction is find

set<int>::iterator itr= s.find(5); 


cout<<"value is present at--> " <<  *it <<endl;//here position of the it can be find out

for(auto it = itr ; it!=s.end() ; it++)
{
 cout<< *it << " " ;

}

cout<<endl;

}