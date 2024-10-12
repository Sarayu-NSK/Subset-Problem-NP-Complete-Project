#include<iostream>
#include <stdbool.h>
using namespace std;
bool SubsetSum(int set[], int n, int sum)
{
if (sum == 0)
{
return true;
}
if (n == 0)
{
return false;
}
if (set[n-1] > sum)
{
return SubsetSum(set, n-1, sum);
}
return SubsetSum(set, n-1, sum)|| SubsetSum(set, n-1,
sum-set[n-1]);
}
4
int main()
{
int n,sum;
cout<<"Enter the number of elements would you like to
enter:"<<endl;
cin>>n;
int set[n];
for(int i=0 ; i < n ; i++)
{
cout<<"Enter the "<<i+1<<" element of set: ";
cin>>set[i];
}
cout<<"The set is : {";
for(int i=0 ; i <n ; i++)
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
5
cout<<"\nNo, there is no subset\n"<<endl;
}
return 0;
}
