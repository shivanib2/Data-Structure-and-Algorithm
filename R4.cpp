#include<iostream>
using namespace std;
int sum(int *arr , int size)
{
    if(size ==0)
    {
        return 0;

    }
    if(size==1)
    {
        return arr[0];

    }
    else {
int ans =0;
ans = arr[0] + sum(arr+1,size-1);
        return ans;
    }
}
int main()
{
    int arr[6] = {1,2,3,10,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = sum(arr,n);
    cout <<ans;

    return 0;

}