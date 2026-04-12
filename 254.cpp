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
    int sm=0,evn=0;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    if(q==-1){
        sm++;
    }
    else{
        evn++;
    }
    a.push_back(q);
    }
    int am=0;

    int sum=evn-sm;
    if(sum<0){
        int nd=(-sum+1)/2;
        am+=nd;
        sm-=nd;
        evn+=nd;
        sum=evn-sm;
    }
    if(sm%2!=0){
        am+=1;
    }
    cout<<am<<endl;
}
return 0;
}