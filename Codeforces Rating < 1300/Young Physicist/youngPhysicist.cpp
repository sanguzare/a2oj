#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, x, y, z, xSum=0, ySum=0, zSum=0;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z;
        xSum+=x;
        ySum+=y;
        zSum+=z;
    }
    if(xSum==0 && ySum==0 && zSum==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}