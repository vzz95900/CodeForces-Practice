#include<bits/stdc++.h>
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
void fastio(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
}
int main()
{
fastio();
noch
while(t--){
string a,b;
cin>>a>>b;
int x=a.length();
int y=b.length();
if(a[x-1]!=b[y-1]){
    if((a[x-1]=='S' && (b[y-1]=='L' || b[y-1]=='M'))
    || (a[y-1]=='M' && b[y-1]=='L')){
        cout<<"<"<<endl;
    }
    else{
        cout<<">"<<endl;
    }
}
else{
    if(a[x-1]=='S'){
        if(x>y){
            cout<<"<"<<endl;
        }
        else if(x<y){
            cout<<">"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
    else if(a[x-1]=='L'){
        if(x>y){
            cout<<">"<<endl;
        }
        else if(x<y){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
    else{
        cout<<"="<<endl;
    }
}
}
return 0;
}