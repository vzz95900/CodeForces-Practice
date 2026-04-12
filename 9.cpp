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
    long long n;
    cin>>n;
    vector <long long> arr(n);
    for(long long& i : arr){
        cin>>i;
    }
    int curr_rat=0;
    for(int j=0;j<n;j++){
        curr_rat=arr[j]-curr_rat;
    }
}
return 0;
}