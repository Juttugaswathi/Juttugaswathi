#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,count=1;
cout<<"enter any number";
cin>>n;
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
cout<<"not prime number";
count=0;
break;
}
}
if(count)
{
cout<<"prime number";
}
return 0;
}
