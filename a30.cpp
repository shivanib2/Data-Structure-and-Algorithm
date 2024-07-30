#include <iostream>
using namespace std;

int printarray(int a[]  , int n )
{
    for(int i =0 ; i<n ; i++)
    {
        cout<<a[i] << " " ;

    }
    cout << endl;

}

int swap2(int a[] , int n )

{
    for(int i =0 ; i<n ; i = i+2)
    {
        if((i+1)<n)
        {
            swap(a[i] , a[i+1]);

        }
    }

}
int main()
{
    int a[100];
    cout << "enter the nummber of array you want to enter"<< endl;
    int n ;

    cin>>n;

    for(int i =0 ; i<n ; i++)
    {
        cin>> a[i] ;

    }

    swap2(a, n);

    printarray(a, n);
    


}