#include<iostream>
using namespace std;

int main()
{
    int a , b ;
    cin >> a >> b ;
    cout << "enter value for the operations " << endl;

    char  operation ;
    cin >> operation ;




    switch (operation ) 
    {
                case '+' : cout<<"a + b = " << a+b << endl;
                                break;

                case '-' : cout<<"a - b = " << a-b << endl;
                                break;

                case '*' : cout<<"a * b = " << a*b << endl;
                                break;

                case '/' : cout<<"a / b = " << a/b << endl;
                                break;

                default : cout << "no operation exit " << endl;



    }

}