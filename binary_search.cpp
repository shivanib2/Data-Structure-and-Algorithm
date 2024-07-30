#include<iostream>
using namespace std;

int binary_search(int a[] , int n , int k )
{   int s = 0 ;
  int e = n-1 ;
    int mid = s  +  (e- s)/2 ;
   
   while(s <=e)
   {
          if(a[mid] == k)
          {
return mid ;

}

if(k > a[mid])
{
    s = mid + 1 ;
}
else{ 
    e = mid - 1;

}
    mid = s +  (e-s)/2 ;

}
return -1;

}

int main()
{
int a[5] = {1 , 2, 3 , 4, 5};
int n = 5;
int k ;
cout << "enter the number want to search" << endl;
cin >> k ;
int index = binary_search(a , n , k) ;

cout << index << endl;
 


}