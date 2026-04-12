#include<iostream>
#include<vector>
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
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
noch
while(t--){
int n;
cin>>n;
cout<<"1 ";
for(int xe=2;xe<=n-2;xe++){
    cout<<xe-1<<" ";
}
cout<<"1 2"<<endl;
}
return 0;
}