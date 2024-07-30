#include<iostream>
#include<math.h>
using namespace std;

int main()
{ // decimal to binary
    int m = 30;
    int ans = 0;
    int i = 0;

     while(m != 0)
     {
       int bits = m&1;
         ans = (bits * pow(10,i)) + ans;
        m= m>>1;
   i++;

     }

     cout<<ans << endl;


int n = 1100;
int digit = 0;
int j = 0;
int base =1 ;


     while (n!=0)
     {  // decimal to binary 
         int bits = n % 10;

     n = n/10;

     digit = digit + bits * base;

      base = base * 2;
       
     }

  cout << digit << endl;


}