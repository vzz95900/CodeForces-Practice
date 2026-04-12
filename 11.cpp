#include<iostream>
#include<cmath>
using namespace std;
long long sumfp(long long m){
    long long sum=m*(m+1)/2;
    return sum*sum;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    long long st=max(1LL,n-k+1);
    long long lev;
    lev=sumfp(n)-sumfp(st-1);
    if(lev%2==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;;
    }
}
return 0;
}