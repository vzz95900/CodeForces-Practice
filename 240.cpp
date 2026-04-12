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
string input;
    int roundNumber;
    if (!getline(cin, input)) {
        return 1;
    }
    istringstream iss(input);
    string gameWord;
    if (!(iss >> gameWord >> roundNumber) || gameWord != "Game") {
        return 1;
    }
    cout << 8 << endl;
return 0;
}
