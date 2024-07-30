#include<iostream>
using namespace std;

int binary_search(int a[] , int n , int k )
{
int s = 0 , e = n ;
int f = 0 ;


int m = s + (e-s)/2 ;

while(s <= e )
{
  if(a[m] == k)
  { 
    f = m ;

     for(int i = m; i <= s ; i--)
  {
    if(a[m-1] == k)
    {   f = m ;

        return f ;

    }

    else
    {
        return m ;

    }
  }

  }


  if(a[m] < k )
  {
   s = m + 1;

     
  }

  else if(a[m] > k)
  {
    e = m -1 ;

  }

  m = (s+e)/2 ;
  


}

}

int main()
{
    int a[4] = {1,2,3,4} ;
    int k ;
    cout << "enter the value you want to search " << endl;
    cin >> k ;
  int n = 4 ;

  int index =  binary_search(a , n , k);

cout << index << endl;
}
