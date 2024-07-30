#include<iostream>
using namespace std;
bool bs(int *arr , int n , int s , int e, int k)
{
     int mid = s - (e-s)/2;
     if( mid ==0)
     {
        return false;

     }
     if(arr[mid] == k)
     {
        return true;
     }

     else if(arr[mid] > k)
     {
        bs(arr , n , s, mid-1 , k);

     }

     else{
  bs(arr , n , mid+1, e , k);
     }

}
int main()
{
    int n =5;
    int arr[n] = {1,2,3,4,5};
   int s =0;
   int e =n-1;
   int k;
   cin>>k;

   bool ans = bs(arr, n , s,e,k);
if(ans)
{
    cout <<"yes";

}
else{
    cout <<"no";
}
return 0;

}