#include<iostream>
#include<vector>
#include<unordered_map>
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
int n,k;
cin>>n>>k;
vector<int> a(n);
unordered_map<int, int> b;
for(int i=0;i<n;i++){
    cin>>a[i];
    b[a[i]]++;
}
int answer=0;
for(auto &[i,j]:b){
    int cmp=k-i;
    if(b.count(cmp)){
        int p=min(j,b[cmp]);
        if(i==cmp) p/=2;
        answer+=p;
        b[i]-=p;
        b[cmp]-=p;
    }  
}
cout<<answer<<endl;
}
return 0;
}