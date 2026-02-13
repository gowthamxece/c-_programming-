#include<iostream>
using namespace std;
int main()
{
int a[20][20];
int n,m,i,j,sum;
cout<<"Give the value in n and m :";
cin>>n>>m;
for(i=0;i=n;i++){
for(j=0;j<m;j++)
cin>>a[i][j];
}
sum=sum+a[i][j];
cout<<"sum of element ="<<sum<<endl;
}

