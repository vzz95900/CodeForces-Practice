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
    vector<int> a,b;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    a.push_back(q);
    }
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        b.push_back(q);
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            swap(a[i],b[i]);
        }
    }
    int mA=*max_element(a.begin(),a.end());
    int mB=*max_element(b.begin(),b.end());

    cout<<mA*mB<<endl;
}
return 0;
}