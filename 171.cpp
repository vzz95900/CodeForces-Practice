#include<iostream>
#include<vector>
using namespace std;
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
vector<int> a;
int c1=0;
int c2=0;
for(int i=0;i<n;i++){
int q;
cin>>q;
if(q==1) c1++;
if(q==2) c2++;
a.push_back(q);
}
int twt=c1+2*c2;
if(twt%2!=0 ){
    no
    continue;
}
int hwt=twt/2;
if(hwt%2==0 || (c1>0 && hwt%2==1)){
    yes
}
else{
    no
}
}
return 0;
}