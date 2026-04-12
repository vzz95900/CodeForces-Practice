#include<iostream>
#include<vector>
using namespace std;
// int pehla;
// cin>>pehla;
// vector<int> a;
// for(int i=0;i<pehla;i++){
// int q;
// cin>>q;
// a.push_back(q);
//}
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
int main()
{
noch
while(t--){
int pehla,dusra;
cin>>pehla>>dusra;
int uttar=4*pehla*dusra;
for(int i=0;i<pehla;i++){
    int vecq,vecw;
    cin>>vecq>>vecw;
    if(i==0){
        continue;
    }
    uttar-=2*(2*dusra-vecq-vecw);
}
cout<<uttar<<endl;
}
return 0;
}