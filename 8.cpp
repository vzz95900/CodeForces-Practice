#include<iostream>
#include <cmath>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long x,y;
    cin>>x>>y;
    cout<<(n+min(x,y)-1)/ min(x, y)<<endl;
}
return 0;
}