// Question level- Beginner
#include<iostream>
using namespace std;
int main()
{
    int n,count=0,fac[100],i,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            fac[k]=i;
            k++;
        }
    }
    cout<<count<<endl;
    for(int j=0;j<k;j++)
    {
        cout << fac[j] <<" ";
    }
    return 0;
}