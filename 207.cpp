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
    set<int> b;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    a.push_back(q);
    b.insert(a[i]);
    }
    if(n==2 || b.size()==1){
        yes
        continue;
    }
    if(b.size()>2){
        no
        continue;
    }
    int x=*b.begin(),xc=0;
    int y=*next(b.begin()),yc=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            xc++;
        }
        if(a[i]==y){
            yc++;
        }
    }
    if(abs(yc-xc)<=1) yes 
    else no
}
return 0;
}