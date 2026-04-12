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
for(int i=0;i<n-2;i++){
int q;
cin>>q;
a.push_back(q);
}
if(n==3){
    yes
    continue;
}
bool uttr=true;
for(int i=0;i<a.size()-2;i++){
    if(i+2<a.size() && a[i]==1 && a[i+1]==0 && a[i+2]==1){
        uttr=false;
        break;
    }
}
if(uttr) yes 
else no
}
return 0;
}