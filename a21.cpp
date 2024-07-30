#include<iostream>
using namespace std;

int fact(int num)
{
    int n =1 ;

    for(int i =1 ; i<=num ; i++)
    {
        n = n * i ;

    }

    return n;



}

int ncr (int n , int r)
{
    int num1 ;
    int num2 ;
    num1 = fact(n);
    num2 = fact(r) * fact(n-r);

    return num1/num2 ;

}

int main()
{
    int n , r;
    cin >> n >> r;

    cout << " ncr value will be : " << ncr(n,r) << endl;




}