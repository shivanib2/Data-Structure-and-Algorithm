#include<iostream>
using namespace std;

int fibo(int n )
{
    int a =0 ;
    int b = 1; 
    int c ;


    for (int i =1 ; i<=(n-2); i++)
    {
         c = a + b ;
        a = b ;
        b =c ;

    }

    return c ;



}

int set_bit(int a , int b)
{  int count1 =0 ;
int count2 =0 ;



while(a)
{int bit = a&1 ;

   if ( bit ==1 )
   {
    count1 = count1 +1 ;

   }

   else {
    return count1 ;

   }
   
  //count1 += a&1 ;

  

   

}
while(b )
{ // int bit = b&1 ;
   /*if ( bit ==1 )
   {
    count2 = count2 +1 ;

   }

   else {
    return count2 ;

   } 
   */
count2 += a&1 ;

 b = b >> 1;
 
}

return count1 + count2 ;



}

int main()
{ cout << "enter the value n for fibbonacci series" << endl ;

  int n ;
  cin >> n ;
  //cout << "answer will be " << fibo(n ) << endl;
  cout << "enter two values to find set bit for them" << endl;

 int d, e ;
 cin >> d >> e  ;
 cout << "number of set bits are " << set_bit(d,e) << endl ;






}