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
    int n,m;
    cin>>n>>m;
    vector<int> a,b;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    a.push_back(q);
    }
    int m1;
    cin>>m1;
    bool ans=true;;
    int pr=min(a[0],m1-a[0]);
    for(int i=1;i<n;i++){
        int cr=a[i];
        int op1=cr;
        int op2=m1-cr;
        vector<int> el;
        if(op1>=pr){
            el.push_back(op1);
        }
        if(op2>=pr){
            el.push_back(op2);
        }
        if(el.empty()){
            ans=false;
            break;
        }
        pr=*min_element(el.begin(),el.end());
    }
    if(ans) yes
    else no
    
}
return 0;
}