#include<iostream>
#include<vector>
#include<set>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int n,m,k;
cin>>n>>m>>k;
vector<int> a(m);
for(int i=0;i<m;i++){
    cin>>a[i];
}
set<int> q;
for(int i=0;i<k;i++){
    int neww;
    cin>>neww;
    q.insert(neww);
}
for(int i=0;i<m;i++){
    int uc=n-q.size();
    bool mis=q.count(a[i])>0;
    if(mis){
        uc++;
    }
    cout<<(uc<=1 ? "1":"0");
}
cout<<endl;
}
return 0;
}