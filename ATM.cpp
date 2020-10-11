#include<bits/stdc++.h>
using namespace std;
int main(){
    long int x;
    float y;
    cin >> x>>y;
    if(x%5==0 && (x+0.50)<y){
        cout<< (y-x-0.50);
    }else{
        cout<< y;
    }
    return 0;
}