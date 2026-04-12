#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int ma=max(a,b);
int mi=min(a,b);
cout<<mi<<" "<<(ma-mi)/2<<endl;
return 0;
}