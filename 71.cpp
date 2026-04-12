#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,c,a,b;
cin>>n>>c>>a>>b;
if((n+c+a+b)%3==0){
    int x=(a+b+c+n)/3;
    if(x>=n && x>=a && x>=c){
        cout<<"Yes"<<endl;
    }
    else cout<<"NO"<<endl;
}
else cout<<"NO"<<endl;
}
return 0;
}