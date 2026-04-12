#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector <int> b(n);
for(int i=0;i<n;i++){
    cin>>b[i];
}
vector<long long>pf(n+1,0);
for(int i=0;i<n;i++){
    pf[i+1]=pf[i]+b[i];
}
vector<int> an(n+1,0);
map<long long,int> last;
last[0]=0;
for(int i=1;i<=n;i++){
    an[i]=an[i-1];
    if(last.count(pf[i])){
        int pp=last[pf[i]];
        an[i]=max(an[i],an[pp]+1);
    }
    last[pf[i]]=i;
}
cout<<an[n]<<endl;
}
return 0;
}