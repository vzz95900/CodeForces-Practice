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
int a,b,c;
cin>>a>>b>>c;
int x=2*a+2*b;
int y=2*c+2*b;
int z=2*a+2*c;
cout<<min(min(x,y),min(z,a+b+c))<<endl;
return 0;
}