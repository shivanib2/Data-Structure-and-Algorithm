#include<iostream>
using namespace std;

int getsum(int *arr,int n )
{
    int ans = 0;
for(int i =0 ; i< n ; i++)
{
    ans += arr[i];

}

return ans ;

}
int main()
{
   /* int i =5 ;
  int &j = i ;

  cout << i <<endl;
  i++;
cout << i <<endl;

  j++;
  cout << i <<endl;
cout <<  j<<endl;
*/
int n ;
cin >> n;

int* arr = new int[n];

for(int i =0 ; i<n ; i++)
{
    cin >> arr[i] ;
}

int a = getsum(arr , n);

cout << a <<endl;


delete[]arr ;
}