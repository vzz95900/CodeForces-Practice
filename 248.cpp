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
vector <int> ut(n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i+1==a[j]){
            ut[i]=j+1;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<ut[i]<<" ";
}
cout<<endl;
return 0;
}