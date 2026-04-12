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
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    a.push_back(q);
    }
    int al=0;
    int cc=0,bic=0,bac=0;
    for(int i=0;i<n;i++){
        if(al==0){
            cc+=a[i];
            al=1;
        }
        else if(al==1){
            bic+=a[i];
            al=2;
        }
        else if(al==2){
            bac+=a[i];
            al=0;
        }
    }
    int utr = max(cc,max(bic,bac));
    if(utr==cc){
        cout<<"chest"<<endl;
    }
    else if(utr==bic){
        cout<<"biceps"<<endl;
    }
    else if(utr==bac){
        cout<<"back"<<endl;
    }
return 0;
}