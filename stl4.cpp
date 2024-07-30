#include<iostream>
#include<stack>
#include<queue>


using namespace std;

int main()

{
    stack<string> s;
    queue<string> q;
    s.push("hello");
     s.push("my");
      s.push("name is");
       s.push("Shivani");

    cout<<"topmost element -->" <<s.top() <<endl;

    s.pop();

    cout<<"topmost element -->" <<s.top() <<endl;
    cout<<"size of element-->" <<s.size() <<endl;
    cout<<"empty or not -->" <<s.empty() <<endl;

q.push("shivani");
q.push("hello");

  
    cout<<"queue front-->" <<q.front() <<endl;
    cout<<"queue back  -->" <<q.back() <<endl;
q.pop();

cout<<"queue after poping " << q.front() << endl;
cout<<"size after pop " << q.size()<<endl;



}