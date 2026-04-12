#include<iostream>
#include<vector>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector <int> vec(n);
    for(int& i : vec){
        cin>>i;
    }
    int rg=0;
    int ans=0;
    for(int j=0;j<n;j++){
        if(vec[j]>=k){
            rg+=vec[j];
        }
        if(vec[j]==0 && rg>0){
                rg--;
                ans++;
        }
    }
    cout<<ans<<endl;
}
return 0;
}