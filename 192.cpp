#include<bits/stdc++.h>
using namespace std;
// int n;
// cin>>n;
// vector<int> a;
// for(int i=0;i<n;i++){
// int q;
// cin>>q;
// a.push_back(q);
//}
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
int n;
cin>>n;
string a,b;
cin>>a>>b;
int sum=0;
for(int i=0;i<n;i++){
    int x=a[i]-'0';
    int y=b[i]-'0';
    int lo=abs(x-y);
    if(lo>5){
        sum+=(10-lo);
    }
    else{
        sum+=lo;
    }
}
cout<<sum<<endl;
return 0;
}