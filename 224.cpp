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
    int b,c,h;
    cin>>b>>c>>h;
    int leh=min(b-1,c+h);
    int count=2*leh+1;
    cout<<count<<endl;
}
return 0;
}