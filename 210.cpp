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
    vector<int> a;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    a.push_back(q);
    }
    unordered_set<int> s;
    int m=0;
    for(int i=n-1;i>=0;i--){
        if(s.count(a[i])) break;
        s.insert(a[i]);
        m++;
    }
    cout<<n-m<<endl;
}
return 0;
}