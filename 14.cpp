#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> vec;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        vec.push(el);
    }
    while(vec.size()>1){
        int fir=vec.top();
        vec.pop();
        int sec=vec.top();
        vec.pop();
        int ne=(fir+sec)/2;
        vec.push(ne);
    }
    cout<<vec.top()<<endl;
 }
return 0;
}