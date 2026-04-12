#include<iostream>
using namespace std;
int main()
{
int k,n,w;
cin>>k>>n>>w;
int price=0;
for(int i=1;i<=w;i++){
        price+=i*k;
}
int ans = price-n;
if(ans<=0){
    cout<<0<<endl;
}
else cout<<ans<<endl;
return 0;
}