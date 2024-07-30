#include<iostream>
using namespace std;

bool search(int *arr , int n , int k)
{
    if(arr[0] ==k )
    return true;

    else{
        search(arr+1 , n-1 , k);

    }

    return false;
}
int main()
{
    int arr[6] = {1,2,3,10,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k ;
    cin>>k;
    bool ans = search(arr ,n,k);
    if(ans)
    {
    cout <<"yes";

    }

    else{
        cout << "no";
    }

    return 0;

}