#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n ;
//char value = 'A';
    for(int i =1 ; i<=n ; i++)
    {   
        for(int j =1; j<=n; j++)
        {
           // cout<<i+j-1 ;
        //cout << i-j+1 ;
        /*char ch = 'A'+i-1;
        cout<< ch;
        */
       /*char ch = 'A'+j-1;
        cout<< ch;
        */
       //above one will be done for j<=n
       /*cout << value;
       value = value +1 ;
       */
        char ch ='A'+i+j-2;
        cout << ch;
        



}
        cout<<endl;

    }

}