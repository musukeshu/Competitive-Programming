/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n;
    long long x,y,i,j;
    cin>>t;
    
    while(t--)
    {
        cin>>n>>x;
        long long c[1000010]={};
        for (i=0;i<n;i++)
        {
            cin>>y;
            c[y]=1;
        }

        long long sum=0;
        long long count=0;
        for (i=0;i<1000010;i++)
        {
        if(sum+i<=x && c[i]==1)
           {
               sum=sum+i;
               count++;
               
           }
        }
        cout<<count<<endl;
    }
}