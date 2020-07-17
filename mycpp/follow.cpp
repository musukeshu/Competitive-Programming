#include<bits/stdc++.h>
using namespace std;

void follow(char );
void first(char );
void addToResultSet(char);
int n,k=0,i=0,j=0;
char followResult[20];
char productionSet[10][10];
main()
{
	int i;
    int choice;
    char c;
    cout<<"How many number of productions : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter productions Number : "<<i+1<<endl;
        cin>>productionSet[i];
    }
    do
    {
    	k=0;
        cout<<"\n Find the FOLLOW of  : ";
        cin>>c;
        follow(c);
        cout<<"\n FOLLOW("<<c<<")= { ";
        for(i=0;i<k;i++)
          cout<<followResult[i]<<"";      
        cout<<"}\n";
        cout<<"press (0/1) to continue : ";
        cin>>choice;
    }
    while(choice ==1);
}

void follow(char c)
{
    if(productionSet[0][0]==c)
	   addToResultSet('$');
    for(i=0;i<n;i++)
    {
       for(j=2;j<strlen(productionSet[i]);j++)
       {
          if(productionSet[i][j]==c)
          {
            if(productionSet[i][j+1]!='\0')
			      first(productionSet[i][j+1]);
            if(productionSet[i][j+1]=='\0'&&c!=productionSet[i][0])
                  follow(productionSet[i][0]);
          }
        }
    }
}
void first(char c)
{
	int k;
    if(!(isupper(c)))
       addToResultSet(c);
    for(k=0;k<n;k++)
   {
        if(productionSet[k][0]==c)
        {
            if(productionSet[k][2]=='$')
			    follow(productionSet[i][0]);
            else if(islower(productionSet[k][2]))
                addToResultSet(productionSet[k][2]);
            else
		        first(productionSet[k][2]);
       }
    }
}

void addToResultSet(char c)
{
	int i;
   followResult[k++]=c;
}

