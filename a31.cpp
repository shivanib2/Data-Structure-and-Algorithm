#include<iostream>
using namespace std;
 

 int print_array(int arr[] , int n )
 { for (int i =0 ; i<n ; i++)
 {
    cout<< arr[i];

 }

 }
 void sort012(int arr[], int n)
{
   //   Write your code here

   //sort(arr , arr+n);

   int i=0, j =n-1 ;

while(i<j)
{ while(arr[i]== 0 &&  i<j)
{  i++;


}

while(arr[j]==1 && i<j)
{
   j--;

}

   if (arr[i]== 1 && arr[j] == 0 && i<j){

      swap (arr[i] ,arr[j]);
      i++;
      j--;

    
   }

}



   
}

int main()
{
    int arr[10] = {0,1,0,1,0,1,0,1,0,1};
    int n= 10;

    sort012(arr , n);
    print_array(arr , n);

}