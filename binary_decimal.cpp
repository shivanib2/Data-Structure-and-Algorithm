#include<iostream>
#include<math.h>
using namespace std;

int main(){
    

int n ;
    cin>> n;

    int i =0 , ans = 0 ;

    //decimal to binary
    while(n!=0){
int bits = n&1;
ans = (bits * pow(10 , i)) + ans;
i++;
n = n>>1;

    }

    cout<< ans ;
    //binary to decimal 

    int m ;
    cout <<"enter the binary number"<<endl;

    cin >> m;

    int a = 0  , j = 0;

    while(m!=0)
    {
        int digit = m%10;
        if(digit == 1)
        {
            a = a + pow(2,j) ;

        }

        
        m = m/10;
j++;
    }
    cout << a;

}