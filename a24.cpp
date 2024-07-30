#include<iostream>
using namespace std;

int main()
{
  int number[3] = {1,2,3};
for(int i =0; i<3 ; i++)
{
  cout << number[i]<<endl;
}

int arr[5] ;
int arrsize = sizeof(arr)/sizeof(int);
cout<< arrsize << endl;


  return 0;


}