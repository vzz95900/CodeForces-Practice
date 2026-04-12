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
int findMaxK(vector<int>& a) {
    int max1 = INT_MIN, max2 = INT_MIN;

    // Find the largest and second largest distinct elements
    for (int num : a) {
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2 && num < max1) {
            max2 = num;
        }
    }

    return max2;
}
int main()
{
fastio();
noch
while(t--){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
    int q;
    cin>>q;
    a.push_back(q);
    }
    cout<<findMaxK(a)<<endl;

}
return 0;
}