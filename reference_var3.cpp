//for diferent column and rows
#include<iostream>
using namespace std;

int main()
{

    int rows ;
    int col ;
    cin >> rows >>col ;

    int** arr = new int *[rows];

    for(int i =0 ; i<rows ; i++)
    {
        arr[i] = new int [col];

    }

    for(int i =0 ; i<rows ; i++)
    {
        for(int j = 0 ; j <col ; j++)
        {
            cin >> arr[i][j] ;

        }
    }

    for(int i =0 ; i<rows ; i++)
    {
        for(int j = 0 ; j <col ; j++)
        {
            cout << arr[i][j] << " " ;
            
        }
        cout << endl;

    }

    //releasing the meamory
    for(int i =0 ; i<rows ; i++)
    {
      delete [] arr[i];


    }

delete[]arr ;

return 0;


}