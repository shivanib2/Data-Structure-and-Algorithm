#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(3);
    for(int i:d)
    {
        cout<<i<<" " ;

    }
    cout<<"\n" ;

    //d.pop_back();
//d.pop_front() ;

    for(int i:d)
    {
        cout<<i<<" " ;

    }

cout<<"\n" ;

    
    cout<<"print first index element"<<d.at(1) <<endl;
    cout<<"print front element"<<d.front() <<endl;
    cout<<"print last index element"<<d.back() <<endl;
    cout<<"print that deque is empty or not "<<d.empty() <<endl;
cout<<"size of deque before erase" << d.size() <<endl;
d.erase(d.begin() , d.begin()+1);
cout<<"size of deque after erase" << d.size() <<endl;



}