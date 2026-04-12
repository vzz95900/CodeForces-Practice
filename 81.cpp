#include<iostream>
using namespace std;
#define noch int t;cin>>t;
int main()
{
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int totalltr=k*l;
int totalslc=c*d;
int tbd=totalltr/(n*nl);
int tbs=totalslc/n;
int tbg=p/(n*np);
int count = min(min(tbd,tbs),tbg);
cout<<count<<endl;
return 0;
}