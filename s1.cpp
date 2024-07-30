#include<iostream>
using namespace std;

char lower(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;

    }

    else{
        char temp = ch - 'A' + 'a';
        return temp;

    }
}
bool checkpalindrome(char ch[] , int n)
{
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
       if(lower(ch[s]) != lower(ch[e]))
       {
        return 0;
       } 
       else
        {
            s++;
            e--;
        }
    }
    return 1;


}

int getlength(char ch[])
{
    int count =0;
    int i =0;

    while(ch[i] != '\0')
    {
        count++;
     i++;
    }

    return count;

}
int main()
{
    char ch[10] ;
    cin >>ch ;
int n = getlength(ch);

  cout <<"palindrome or not :  "<<checkpalindrome(ch , n)<<endl;




    return 0;

}