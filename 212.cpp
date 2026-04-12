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
    int counte=0,counto=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            counte++;
        }
        else{
            counto++;
        }
    }
    cout<<min(counte,counto)<<endl;
}
return 0;
}