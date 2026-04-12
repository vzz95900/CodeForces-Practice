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
    int c0=0,c1=0,c3=0,c2=0,c5=0;
    int asn=-1;
    vector<int> a;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    a.push_back(q);
    }
    for(int i=0;i<n;i++){
        if(a[i]==0) c0++;
        if(a[i]==1) c1++;
        if(a[i]==2) c2++;
        if(a[i]==3) c3++;
        if(a[i]==5) c5++;
        
        if(c0>=3 && c1>=1 && c2>=2 && c3>=1 && c5>=1){
            asn=i+1;
            break;
        }
        }
    if(c0<3 || c1<1 || c2<2 || c3<1 || c5<1){
        cout<<0<<endl;
        continue;
    }
    cout<<asn<<endl;
}
return 0;
}