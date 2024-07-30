#include<iostream>
using namespace std;


int sum (int arr[] , int n )
{
    int add = 0 ;

    for(int i =1 ; i <=n ; i++)
    {

        add = add + arr[i] ;

    }
return add;


}

int main()
{
    int arr[100];
    int n ;
    cin >>n;

    for(int i =1 ; i <= n ; i++)
    {
          cin >> arr[i];

    }

    cout << "sum will be " << sum (arr , n ) ;



    return 0;

}