#include<iostream>
using namespace std;
int bs(int a[] , int n )
{
  int start = 0;
  int end = n-1;
  int mid = start + (end -start)/2;
  
  while(start <= end)
  {
    if(a[mid] == n)
    {
        return mid;

    }

    if(n > a[mid])
    {
        start = mid+1;
    }

    else{
        end = mid-1;
    }
    mid = (start + end)/2;

  }

  return -1;

}
int main()
{
    int a[5] = {1,2,3,4,5};
int n;
cin >> n;


   int ans =  bs(a , n);

    cout <<ans <<endl;

    return 0;

}