#include<iostream>
#include<vector>
using namespace std;

const int MOD=998244353;
#define noch int t;cin>>t;

int gcd(int a,int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >> t;
vector<int> a(t);
for(int i = 0; i < t; i++) {
    cin >> a[i];
}
vector<long long> p(t,0);
p[0]=1;
for(int i=0;i<t-1;i++){
    if(p[i]==0) continue;
    for(int j=i+1;j<t;j++){
        if((gcd(a[i],a[j])>1)){
            p[j]=(p[j]+p[i])%MOD;
        }
    }
}
cout<<p[t-1]<<endl;
return 0;
}