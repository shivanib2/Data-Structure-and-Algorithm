#include<iostream>
using namespace std;


int main()
{
        int n;
        cin>>n;
    bool b = 1;

        for(int i = 2; i<n ; i++ )
        {
            if( n%i == !0)
            {   b = 0;

                break;
                // continue is used to skip any iteration 

            }
        }


            if (b==0)
            {
                cout<<"it is a prime number"<<endl;
            }
            else{
                cout<<"it is not a prime number"<<endl;

            }


for (int i=1; i<=n ; i++)
        {
            cout<<"hello"<<endl;
             cout<<"my name is shivani"<<endl;
             continue ;

              cout<<"good ;luck"<<endl;
        }

}