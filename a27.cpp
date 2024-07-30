#include<iostream>
using namespace std;


void swap2(int a[] , int n )
{
     int start = 0 ;
     int end = n - 1 ;

     while(start<= end)
     {
        swap(a[start],a[end]);
        start ++ ;
        end -- ;

     }
}


void printarray(int a[] , int n )
{
    for(int i = 0 ; i< n ; i++)
    {
        cout <<  a[i] << " " ;

    }

    cout << endl;
}

int main()
{     int a[100];


int n ;
cout<< "enter how many you want to enter in the array " << endl;
cin >> n;
cout<<"enter the values in the array" << endl;

for(int i =0; i<n ; i++)
{
cin >> a[i] ;


}

cout << "reversing of the array is as follows " << endl;




swap2( a , n );

printarray(a, n) ;


return 0;



}