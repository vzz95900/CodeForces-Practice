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
int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++){
    int qo;
    cin>>qo;
    a.push_back(qo);
}
vector<int> b;
for(int i=0;i<n;i++){
    int qo;
    cin>>qo;
    b.push_back(qo);
}
bool ans=true;
for(int i=0;i<n;i++){
    if(a[i]<b[i]){
        int r=b[i]-a[i];
        for(int k=0;k<n;k++){
            if(i!=k){
                if(a[k]-b[k]<r){
                    no
                    ans=false;
                    break;
                }
            }
        }
        break;
    }
}
if(ans){
    yes
}
}
return 0;
}