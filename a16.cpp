#include<iostream>
using namespace std;

int main()
{   

     int n ;
     cin >> n;
 //here in switch(2*n) can we given it will give result according to that only 
     switch(n)
     {
        case 1 : cout << "1st number" << endl;
        break ;


        case 2 : switch(n){
            case 1 : cout << "1st number" << endl;
            break;
        }

        break ;


        default : cout << "end of cases "<< endl;



     }

     


}


