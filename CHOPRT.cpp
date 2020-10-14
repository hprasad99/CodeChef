/*https://www.codechef.com/problems/CHOPRT*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>b){
            printf(">\n");
        }else if(a<b){
            printf("<\n");
        }else{
            printf("=\n");
        }
    }
    return 0;

}