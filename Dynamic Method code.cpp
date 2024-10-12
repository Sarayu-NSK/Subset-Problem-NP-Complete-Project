#include<iostream>
#include<stdbool.h>
using namespace std;
bool SubsetSum(int set[], int n, int sum)
{
bool subset[n + 1][sum + 1];
for (int i = 0; i <= n; i++)
{
subset[i][0] = true;
}
for (int i = 1; i <= sum; i++)
{
subset[0][i] = false;
}
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= sum; j++)
{
if (j < set[i - 1])
{
subset[i][j] = subset[i - 1][j];
}
if (j >= set[i - 1])
{
subset[i][j] = subset[i - 1][j]|| subset[i - 1][j -set[i -
1]];
}
}
}
cout<<"Table:\n\n";
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= sum; j++)
{
cout<<" "<<subset[i][j];
}
cout<<"\n";
}
return subset[n][sum];
}
int main()
{
int n,sum;
cout<<"Enter the number of elements would you like to
enter:";
cin>>n;
int set[n];
for(int i=0 ; i < n ; i++)
{
cout<<"Enter the "<<i+1<<" element of set: ";
cin>>set[i];
}
cout<<"The set is : { ";
for(int i=0 ; i < n ; i++)
{
cout<<set[i]<<",";
}
cout<<"\b}\n"<<endl;
cout<<"Enter the value of sum:";
cin>>sum;
if (SubsetSum(set, n, sum) == true)
{
cout<<"\nYes, there is a subset\n"<<endl;
}
else
{
cout<<"\nNo, there is no subset\n"<<endl;
}
return 0;
}
