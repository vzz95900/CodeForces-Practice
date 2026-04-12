#include<bits/stdc++.h>
using namespace std;
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
int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++){
int q;
cin>>q;
a.push_back(q);
}

int m=INT_MAX , x=1,y=n;
for (int i = 0; i < n; i++) {
    int next = (i + 1) % n;
    int diff = abs(a[i] - a[next]);
    
    if (diff < m) {
        m = diff;
        x = i + 1;
        y = next + 1;
    }
}
cout<<x<<" "<<y<<endl;
return 0;
}