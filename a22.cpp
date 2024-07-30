#include<iostream>
using namespace std;

bool prime(int n )
{
    for(int i = 2 ; i<n ; i++)
    {
        if (n%i == 0)
        {
            /* code */
            //cout<< "it is not prime" << endl;
            return 0;


        }

    }
return 1;

}

int main()
{
    int n ;
    cin >> n;
    if (prime(n)) {
        cout << "it is a prime number " << endl;

    }

    else 
    {
        cout << "it is not a prime number" << endl;

    }


}