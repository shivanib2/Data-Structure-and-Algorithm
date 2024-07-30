#include<iostream>
using namespace std;

bool sort(int *arr, int size)
{
       if(size==0 || size==1)
       {
        return true;

       }

       if(arr[0] > arr[1])
       {
           return false;
       }
       else{
        bool ans = sort(arr+1 , size-1);
        return ans;

       }



}
int main()
{
    int arr[6] = {1,2,3,10,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool ans = sort(arr,n);
    if(ans)
    {
        cout<<"Array is sorted ";
    }

    else{
        cout<<"Array is not sorted";
    }

    return 0;

}