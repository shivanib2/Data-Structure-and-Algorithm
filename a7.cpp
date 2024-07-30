#include<iostream>
using namespace std;

void printPat(int n)
{  

    
    for(int i = 0 ; i< n ; i++)
    {
        for(int j = 0 ; j < (n)^n ; j++)
        {
           
            cout << i ;
            /*for(int k = n ; k<= 1 ; k--)
            
            { 
               
                
            }*/
            
            
        }
         cout<< "$";
    }
    
   
    
    
}
int main()
{
    int n;
    cin >> n ;
    char v = 'A';
    printPat(n);



    /*for(int i =1 ; i<=n ; i++)
    {    char start = 'A'+ n -i;

        for(int j =1 ; j<= i  ; j++)
        { 
            cout<<start;
            start =start +1;
        }
        cout <<endl;
    }
    */

}



