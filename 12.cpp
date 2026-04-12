#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector <int> vec(n);
    for(int& i : vec){
        cin>>i;
    }
    int count=0;
    sort(vec.begin(),vec.end());
    int sum=accumulate(vec.begin(),vec.end(),0);
    int avg=sum/n;
    int mid=vec[n/2];
    while(1){
        sum=accumulate(vec.begin(),vec.end(),0);
        avg=sum/n;
        mid=vec[n/2]; 
        if(avg>mid){
        vec[n-1]++;
        count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
}
return 0;
}