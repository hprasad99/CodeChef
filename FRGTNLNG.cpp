#include<iostream>
#include<vector>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K,L;
        
        vector <string> phrase[55];
        string forgotten[109];
        cin>>N>>K;
        for(int i=0;i<N;i++){
            cin >> forgotten[i];
        }
        for(int i=0;i<K;i++){
            cin>>L;
            for(int j=0;j<L;j++){
                string S;
                cin>>S;
                phrase[i].push_back(S);
            }
        }

        for(int i=0;i<N;i++){
            string answer= "NO";
            for(int j=0;j<K;j++){
                for(int k=0;k<phrase[j].size();k++){
                    if(phrase[j][k]==forgotten[i])
                        answer = "YES";
                }
            }
            cout<<answer<<(i==N-1?"\n":" ");
        }
    }
    return 0;
}