#include<iostream>
#include<vector>
using namespace std;
#define ll long long
const int Max=100;
const int Mod=1e9+7;
int main()
{
int t;
cin>>t;
vector<ll> n;
for(int i=0;i<t;i++){
    ll ele;
    cin>>ele;
    n.push_back(ele);
}
vector<ll> k;
for(int i=0;i<t;i++){
    ll ele;
    cin>>ele;
    k.push_back(ele);
}
vector<vector<int>> C(Max+1,vector<int>(Max+1,0));
ll ans;
for (int i = 0; i < Max; i++) { // loop over n from 0 to N-1 (inclusive)
        C[i][0] = 1;
        C[i][i] = 1;
        for (int j = 1; j < i; j++){ // loop over k from 1 to n-1 (inclusive)
            C[i][j] = (1LL*C[i][j - 1] + C[i - 1][j - 1]);
        }
    }
for(int i=0;i<t;i++){
    cout<<C[n[i]][k[i]]<<endl;
}
return 0;
}