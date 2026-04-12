#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    fastio();
    string s,t;
    cin>>s>>t;
    string anss;
    string anst;
    for(int i=0;i<s.length()-1;i++){
        string sst=s.substr(i,2);
        for(int j=0;j<t.length()-1;j++){
            string stt=t.substr(j,2);
            if(sst==stt){
                anss=s.substr(0,i+2);
                anst=t.substr(j+2,t.length()-(j+2));
                anss=anss+anst;
            }
        }
    }
    if(anss[0]=='\0'){
        cout<<-1<<endl;
        return 0;
    }
    cout<<anss<<endl;
    return 0;
}