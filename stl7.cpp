#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int , string> m;
 //for ordered map it is sorted
    m[1] = "shivani";
    m[2] = "bansal";
    m[3] = "girl";
 m.insert({5,"ayush"});

    for(auto i:m)
    
    {
        cout<<i.first<<" " <<i.second << endl;

    }

    //for unordered map it is unsorted
   
cout<<"finding 5 -->" << m.count(5) <<endl;
//for 
m.erase(5);
for(auto i:m)
    
    {
        cout<<i.first<<" " <<i.second << endl;

    }                      


}