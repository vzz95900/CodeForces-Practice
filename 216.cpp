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
    sort(a.begin(),a.end());
    int maxi=1,count=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count++;
            maxi=max(count,maxi);
        }
        else{
            count=1;
        }
    }
    cout<<n-maxi<<endl;
}
return 0;
}