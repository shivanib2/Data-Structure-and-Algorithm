#include<iostream>
using namespace std;

int main()
{
    char ch ;
    cin >> ch ;

    if(48<= ch && ch<=57)
    {
        cout<<"the value is numeric "<<endl;

    }
    else if(65<= ch && ch <= 90)
    {
        cout<<"the letter is capital letter " << endl;

    }

    else if(97<= ch && ch<= 122)
    {
        cout<<"the letter is small letter " << endl;

    }

    else{
        cout<<"it is some notation"<<endl;

    }
}
