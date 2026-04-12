/* ViJzZz Ka CoDe h ❤️ */


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
bool canDestroy(string s) {
    int n = s.length();
    
    if (n <= 2) return false;
    
    for (int i = 0; i < n; i++) {
        if (s[i] != '(') continue;
        
        for (int j = 0; j < n; j++) {
            if (s[j] != ')') continue;
            
            int balance = 0;
            bool unbalanced = false;
            
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;
                
                if (s[k] == '(') {
                    balance++;
                } else {
                    balance--;
                }
                if (balance < 0) {
                    unbalanced = true;
                    break;
                }
            }
            if (unbalanced || balance != 0) {
                return true;
            }
        }
    }
    
    return false;
}
int main()
{
fastio();
noch
while(t--){
string s;
cin>>s;
if(canDestroy(s)){
    yes
}
else no
}
return 0;
}