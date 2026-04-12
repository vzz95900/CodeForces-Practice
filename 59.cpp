#include<iostream>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    ll n,f,a;
    cin>>n>>f>>a;
    ll min_sum=f*(f+1)/2;
    ll max_sum = (n * (n + 1)) / 2 - ((n - f) * (n - f + 1)) / 2;
    if(a>= min_sum && a<=max_sum) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
return 0;
}