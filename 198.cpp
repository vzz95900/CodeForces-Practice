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
    vector<vector <int>> a(n,vector<int>(m));
    map<int,int > cc;
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
        cc[a[i][j]]=1;
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int c=a[i][j];
            for(auto [x,y]:vector<pair<int,int>>{{0,1},{1,0},{0,-1},{-1,0}}){
                int in=i+x,jn=j+y;
                if(in>=0 && in<n && jn>=0 && jn<m && a[in][jn]==c){
                    cc[c]=2;
                }
            }
        }
    }
    int tc=0,mc=0;
    for(auto& [i,j] : cc){
        tc+=j;
        mc=max(mc,j);
    }
    cout<<tc-mc<<endl;
}
return 0;
}