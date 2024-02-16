#include<iostream>
using namespace std;
int main()
{
  int f=0,s=1,t,n;
  cout<<"enter value n :";
  cin>>n;
  if(n<=0)exit(1);
    if(n>=1){
      cout<<f;
  if(n>=2)cout<<s;
    }
  for(int i=0;i<n-2;i++)
    {
    t=f+s;
      cout<<t<<" ";
      f=s;
      s=t;
    }
  return 0;
}
