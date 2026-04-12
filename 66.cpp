#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int c=24-a;
int ans=(c-1)*60+(60-b);
cout<<ans<<endl;
}
return 0;
}