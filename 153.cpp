#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n,m;
cin>>n>>m;
vector<string> a;
int set=0;
for(int i=0;i<n;i++){
    string q;
    cin>>q;
    a.push_back(q);
}
if(a[0].length()>m){
    cout<<0<<endl;
    continue;
}
for(int i=0;i<n;i++){
    if(m>=a[i].length()){
        m-=a[i].length();
        set++;
    }
    else{
        break;
    }
}
cout<<set<<endl;
}
return 0;
}