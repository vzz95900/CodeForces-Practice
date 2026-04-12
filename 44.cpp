#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin >> n;

    vector<vector<int>> mt(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mt[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mt[i][j]<0){
                int opn=(-mt[i][j]);
                ans+=opn;
                for(int k=0;k+i<n && k+j<n;k++){
                    mt[i+k][j+k]+=opn;
                }
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}