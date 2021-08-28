//Question Level- very easy
// This Method also accepted on Codechef 
// SOlved Using Arrays
//Approach Number 2 using in-built function
#include<iostream>
#include<bits/stdc++.h>         //necessary header file for using in-built sort function
using namespace std;
int main()
{
    int ar[3];
    for(int i=0;i<3;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+3);  //instead of this use can also use sorting techniques like bubble sort
    cout<<ar[1];
    return 0;
}