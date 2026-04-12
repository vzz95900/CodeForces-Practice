#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
bool t=true;
for(int i=0;i<n;i++){
    if(a[i]==a[i+1]){
        t=false;
        break;
    }
}
if(t) yes
else no
}
return 0;
}