#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
void fastio(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
int main()
{
fastio();
noch
while(t--){
    int n;
    cin>>n;
    int ans=0;
    while(1){
        if(n/10==0){
            ans+=n%10;
            break;
        }
        ans+=9;
        n/=10;
    }
    cout<<ans<<endl;

}
return 0;
}