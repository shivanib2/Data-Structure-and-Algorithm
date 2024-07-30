#include<iostream>
using namespace std ;
void bubble_sort(int a[] , int n )
{ 
for(int i=0 ; i < n ; i++)
{
    for(int j = 0; j<n-1 ; j++)
    {if(a[j] > a[j+1])
    {
   swap(a[j] , a[j+1]);
    }

    }
    cout << a[i] ; 

}


  
}

int main()
{
int a[5] = { 9 , 3 , 5, 6 , 7};
int n = 5 ;
bubble_sort(a , n ) ;



}