#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    
    for(int i =1 ; i<=n ; i++)
    {     /*int space = n-i; 
        while(space)
        {
             cout<<" ";
             space = space-1;

        }
        */
       int star = n-i+1; 

 for(int j =1 ; j<= n  ; j++)
        {  
        while(star)
{
            cout <<"*" ;
            star = star -1;

}
        }
        cout<<endl;
    }
}



