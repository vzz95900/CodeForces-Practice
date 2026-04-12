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
noch
while(t--){
int n,k;
cin>>n>>k;
int l=k;
string a="abcdefghijklmnopqrstuvwxyz";
int i=0;
string s="";
while(n>0){
    while (l>0)
    {
        s+=a[i];
        i++;
        l--;
    }
    l=k;
    i=0;
    n--;
}
cout<<s<<endl;
}
return 0;
}