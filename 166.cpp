#include<iostream>
#include<vector>
using namespace std;
// int n;
// cin>>n;
// vector<int> a;
// for(int i=0;i<n;i++){
// int q;
// cin>>q;
// a.push_back(q);
//}
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
bool isComposite(int num) {
    if (num <= 3) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return true;
        }
    }
    return false;
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int x;
cin>>x;
int b=x-2;
int a=2;
while(a<b){
    if(isComposite(a) && isComposite(b)){
        break;
    }
    b--;
    a++;
}
cout<<a<<" "<<b<<endl;

return 0;
}