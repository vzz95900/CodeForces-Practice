#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
int n;
cin>>n;
vector <int> a(n),b(n);
for (int i=0;i<n;i++){
    cin>>a[i]>>b[i];
}
int curr=0;
int maxc=0;
for(int i=0;i<n;i++){
    curr-=a[i];
    curr+=b[i];
    maxc=max(curr,maxc);
}
cout<<maxc<<endl;
return 0;
}