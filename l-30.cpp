#include<iostream>
using namespace std;


inline int check(int a , int b)
{
    return a>b?1:0;


}
int main()
{

    int a = 10 ;
    int b =20 ;

   int ans = check(a,b);
cout <<ans;

    return 0;


}