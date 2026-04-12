#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int minopr(int n,int k){
    if(k==1){
        return n;
    }
    int count=0;
    while(n>0){
        count+=n%k;
        n/=k;
    }
    return count;
}
int main()
{
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    cout<<minopr(n,k)<<endl;
}
return 0;
}