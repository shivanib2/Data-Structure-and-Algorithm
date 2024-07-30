#include<iostream>
using namespace std;
int fact(int n )
{
if(n==0)
{
    return 1 ;

}


return n* fact(n-1) ;


}

int power(int n )
{
    if(n==0)
    {
        return 1;

    }

    return 2*power(n-1);

}

void print(int n)
{
  if(n==0)
  {
    return;
  }
cout << n ;

print(n-1);

}

void print2(int n)
{
  if(n==0)
  {
    return;
  }


print2(n-1);
cout << n ;
}
int main()
{
    int n ;
    cin >> n;

    int ans = fact(n);
    cout << ans << endl;

    int a = power(n);
    cout << a << endl;

   print(n);
   cout <<endl;

print2(n);

   return 0 ;



}