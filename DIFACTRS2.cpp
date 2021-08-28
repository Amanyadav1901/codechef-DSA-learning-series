// Question level- Beginner
// Approach with Functions
#include<iostream>
using namespace std;
void fact(int n)
{
    int c=0,ar[100],k=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            ++c;
            ar[k]=i;
            ++k;
        }
    }
    cout<<c<<endl;
    for(int j=0;j<k;j++)
    {
        cout<<ar[j]<<" ";
    }
}
int main()
{
    int n,count=0,fac[100],i,k=0;
    cin>>n;
    fact(n);
    return 0;
}