#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    string s, final;
    cin>>s;
    for(int i=0;i<t;i++){
        final=s;
        for(int j=0;j<(n-1);j++){
            if(s[j]=='B' && s[j+1]=='G'){
                final[j] = 'G';
                final[j+1] = 'B';
                j++;
            }
        }
        s=final;
    }
    cout<<final<<endl;
}