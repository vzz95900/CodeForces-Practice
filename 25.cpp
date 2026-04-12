#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
string s;
getline(cin,s);
int count=0;
int rep=0;
unordered_map<char ,int> se;
for(char c: s){
se[c]++;
}
for(const auto&pair: se){
    if(pair.second==1){
        count++;
    }
    else rep++;
}
if((count+rep)%2==0) cout<<"CHAT WITH HER!"<<endl;
else cout<<"IGNORE HIM!"<<endl;
return 0;
}