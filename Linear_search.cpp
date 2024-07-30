#include<iostream>
using namespace std;

bool search(int a[] , int k )
{
    
      for(int i =1 ; i<= 5  ; i++)
    {

        if (a[i] == k)
        {
              return 1;

        }
        

  

    }

    return 0;

}

int main()
{
  int a[5] = {3, 6 ,2 , 4 ,7};
  cout << "enter the element you want to search" << endl;

  int k ;
  cin >> k ;

  bool found = search(a ,k) ;

if(found )
{
  cout << "Key is present " << endl;

}
else 
{ cout << "Key is not present " << endl;

}


 return 0;


}