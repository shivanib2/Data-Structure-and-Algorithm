#include<iostream>
using namespace std;


/*int print(int arr[] , int n )
{

    cout << sizeof(arr) <<endl;

    int sum = 0;
    for(int i  =0 ; i<n ; i++)
    {
        sum += i[arr];

    }
    return sum ;


}
*/

int update (int **ptr)
{
    //ptr = ptr +1 ;

   // *ptr = *ptr +1;
   **ptr = **ptr +1;

}

int main()
{
    //int i = 3;
    //int *p = &i;

   // int n = 5 ;

//int arr[5] = {1,2,3 , 4 , 5};

   /* cout << i << endl;
    cout << *p << endl;
    cout<< p<< endl;
    
    cout << i[arr] <<endl;
    p = p+1;

    cout << p <<endl;
     
cout << arr <<endl; */



//cout << print(arr , n) <<endl;

int i =5;
int *p = &i;
int **ptr = &p;

/* cout<<i <<endl;
cout<<*p <<endl;
cout<<**ptr <<endl;


cout<<&i <<endl;
cout<< p <<endl;
cout<< *ptr<<endl;

cout << &p << endl;
cout << ptr << endl;

cout << &ptr << endl; */
cout<<ptr <<endl;
cout<<*ptr <<endl;
cout<<**ptr <<endl;
update( ptr);

cout<<ptr <<endl;
cout<<*ptr <<endl;
cout<<**ptr <<endl;


}