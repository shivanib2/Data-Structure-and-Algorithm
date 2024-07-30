#include<iostream>
#include<math.h>
using namespace std;

int main()
{   
    int n ;
    cin>> n ;
    long long ans =0;
    int i = 0;

    while(n !=0)

    {
        long long bit = n & 1;
        ans = (bit* pow(10,i)) + ans;
        n = n>>1;
        i++;

    }

    cout<<"answer is " << ans << endl;


   

}