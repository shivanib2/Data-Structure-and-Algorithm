#include<iostream>
#include<array>
#include<vector>

using namespace std;

int main()
{  
    //array 
    int basic[5] = {1,2,3,4,5};

    array<int, 5> a = {6,7,8,9,10};

    int size= a.size();
    cout<<size<<endl;


    for(int i =0 ; i<size ; i++)
    {
        cout<<a[i]<<endl;

    }

    cout<<"value at index 2 will be "<<a.at(2)<<endl; // random access can be done / O(1)
    cout<<"is the array is empty or not " << a.empty() << endl;
    cout<<"element at the starting  " << a.front() << endl; //O(1)
    cout<<"element at the back  " << a.back() << endl; //O(1)

    //vector

    //it is dynamic in nature (size will be managed according to need ) . if the vector is fulled it will double its size 
 
 vector<int> v ;
 vector<int> l(v);
 // here copy of the predefined vector is possible only if it doesnt have values intialised already like in below eg.
 
 vector <int> a(5,1);
 
 // 15:57 not working vector<int> last(a);
 /* for(int i:last)
 {
 cout<<i<<" " ;

 }
*/
 for(int i:a)
 {
 cout<<i<<" " ;

 }
cout<<"\n";

 cout<<"printing the copy of a " << endl;

 
 
 

 cout<<"capacity"<< v.capacity() << endl;

 v.push_back(1);
  cout<<"capacity"<< v.capacity() << endl;
 
 v.push_back(2);
   cout<<"capacity"<< v.capacity() << endl;

    v.push_back(3);
   cout<<"capacity"<< v.capacity() << endl;

cout<<"size-->" << v.size() << endl;

cout<<v.front() << endl;
cout<<v.back() << endl;
cout<<v.at(2) << endl;
for(int i:v)
{
    cout<<i<<" ";
    
}
cout<<"\n";

v.pop_back();

for(int i:v)
{
    cout<<i<<" ";

}


  

}