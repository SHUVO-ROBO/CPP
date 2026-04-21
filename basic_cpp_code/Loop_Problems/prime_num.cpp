#include<iostream>
using namespace std;

int main()
{
    int i,n,flag=0;

    cin>>n;
    if(n==0 || n==1) flag=1;

    for(i=2 ;i<n ; i++){
      if(n%i==0) flag=1;
      break;
    }

    if(flag==0)cout<<"Prime Number"<<endl;
    else cout<<"Not Prime Number"<<endl;

    return 0;
}
