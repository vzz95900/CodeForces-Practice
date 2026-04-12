#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> str(n);
for(int i=0;i<n;i++){
    cin>>str[i];
}
bool ans=true;
for(int i=0;i<n;i++){
    if(str[i]==1){
        ans=false;
        break;
    }
}
if(ans==false){ cout<<"HARD"<<endl;}
else{ cout<<"EASY"<<endl; }
return 0;
}