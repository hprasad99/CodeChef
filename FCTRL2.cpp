#include<bits/stdc++.h>
using namespace std;
int getFact(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n * getFact(n-1);
    }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<getFact(n)<<"\n";
    }
    return 0;
}