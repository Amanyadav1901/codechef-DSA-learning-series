// approach using functions
// Question level - Beginner
#include<iostream>
using namespace std;
void checkdiv(int n)
{
    if( n%5==0 && n%11==0 )
    {
        cout<<"BOTH";
    }
    else if( n%5 != 0 && n%11 != 0)
    {
        cout<<"NONE";
    }
    else
    {
        cout<<"ONE";
    }
}
int main()
{
    int n;
    cin>>n;
    checkdiv(n);
    return 0 ;
}