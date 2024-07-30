#include<iostream>
using namespace std ;

int getpivot(int a[] , int n )
{
  int s = 0 ;
  int e = n-1 ;
  int mid = s + (e-s)/2 ;

  while(s<e)
  {
    if(a[mid] >= a[0])
    {
        s = mid + 1 ;

    }

    else{
        e = mid ;

    }
    mid = (s+e) / 2 ;


  }
  return s ;


}
int main()
{
int a[5] = {1 , 2, 3 , 4, 5};
int n = 5;

cout << "pivot is " << getpivot(a , n) << endl ;

}
