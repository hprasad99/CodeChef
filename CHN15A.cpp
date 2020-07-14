#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K,ans=0;
        cin>>N>>K;
        while(N--){
            int a;
            cin>>a;
            if((a+K)%7==0){ans++;}
        }
        cout<<ans<<endl;
    }
    return 0;
}