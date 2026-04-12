#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> seq;
for(int i=1;i<2000;i++){
    if(i%3==0 || i%10==3){
        continue;
    }
    else{
        seq.push_back(i);
    }
}
cout<<seq[n-1]<<endl;
}
return 0;
}