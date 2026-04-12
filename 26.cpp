#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, a;
        cin>>s;
        cin>>a;
        int count=0;
        for(int i=0;i<min(s.size(),a.size());i++){
            if(s[i]==a[i]){
                count++;
            }
            else{
                break;
            }
        }
        int sne=s.size()-count;
        int ane=a.size()-count;

        int total=count;
        if(total==0){
            cout<<s.size()+a.size()<<endl;
        }
        else{
            total++;
            total+=max(sne,ane);
            total+=min(sne,ane);
            cout<<total<<endl;
        }

        
    }
    return 0;
}