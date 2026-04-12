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
cin>>n;
vector<int> ev(n);
for(int i=0;i<n;i++){
    cin>>ev[i];
}
sort(ev.begin(),ev.end());
int e=ev[0];
int v=ev[n-1];
cout<<v-e<<endl;
}
return 0;
}