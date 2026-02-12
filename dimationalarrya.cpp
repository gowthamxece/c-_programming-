#include<iostream>
using namespace std;
int main()
{
int i,n,j,small,position;
int a[100];
cout<<"Give the n number :";
cin>>n;
for(i=0;i<n;i++)
{

cin>>a[i];
small=a[0];
position=0;
}
for(i=0;i<n;i++)
{
if(a[i]<=small)
{
small=a[i];
position=i;
}

}
cout<<"smallest element is:"<<small<<endl;
cout<<"the position is:"<<position+1<<endl;
return 0;
}
