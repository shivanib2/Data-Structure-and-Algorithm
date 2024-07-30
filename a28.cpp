#include<iostream>
using namespace std;

int firstside(int a[] , int n , int k )
{   int s = 0 ;
  int e = n-1 ;
    int mid = s  +  (e- s)/2 ;
   int ans = -1 ;

   while(s <=e)
   {
          if(a[mid] == k)
          {
            ans =  mid ;
            e = mid -1 ;
            

            }

        else if(k > a[mid])
        {
            s = mid + 1 ;
            }
        else { 
    e = mid - 1;

}
    mid = (s + e)/2 ;


}
return ans ;
}




int lastside(int a[] , int n , int k )
{   int s = 0 ;
  int e = n-1 ;
    int mid = s  +  (e- s)/2 ;
   int ans = -1 ;

   while(s <=e)
   {
          if(a[mid] == k)
          {
            ans =  mid ;
           s = mid +1 ;
            

            }

        else if(k > a[mid])
        {
            s = mid + 1 ;
            }
        else { 
    e = mid - 1;

}
    mid = (s + e)/2 ;

}
if(ans == -1)
{
    cout << "doesnot exists " << endl ;


}
else 
{
    return ans ;
}
}


int main()
{
int a[5] = {1 , 2, 3 , 4, 4};
int n = 5;
int k ;
cout << "enter the value you want to search first and last occurrence " << endl;
cin>> k ;

cout << "first occurrence " << firstside(a, n , k) << endl ;
cout << "last occurrence " << lastside(a, n , k) << endl ;
int index = (lastside(a, n , k) - firstside(a, n, k) )+1 ;
cout << index << endl;

}
