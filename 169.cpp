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
int n;cin>>n;
string a;cin>>a;
bool rep=true;
for(int i=0;i<n-1;i++){
    if(a[i]!=a[i+1]){
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i]){
            rep=false;
            break;
            }
        }
    }
}
if(rep) yes
else no
}
return 0;
}