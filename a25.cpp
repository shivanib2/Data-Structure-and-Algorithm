#include<iostream>
#include<climits>

using namespace std;

int getMax(int num[] , int n )
{
   int maxi = INT_MIN;

   for(int i=0; i<n ; i++)
   { 
    maxi = max(maxi , num[i]);

   /* if(num[i]> max)
    {
        max = num[i];

    }*/
   }
 return maxi;

}

int getmin(int num[] , int n )
{
   
   int mini = INT_MAX ;

   for(int i=0; i<n ; i++)
   {


    mini = min(mini , num[i]);

    /*if(num[i] < min)
    {
        min = num[i];

    }
    */

   }
 return mini; 
}

int main()
{
    int n ;
    cin >> n;

    int num[100];

    for(int i =0 ; i<n ; i++)
    {
        cin >> num[i] ;

    }
   cout << "maximum value is : " << getMax(num , n) << endl ;
    cout << "minimum value is : " << getmin(num , n) << endl ;

}