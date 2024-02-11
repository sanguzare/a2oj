#include <iostream>
#include <vector>
using namespace std;

int main(){
    int matrix[5][5], loc_i, loc_j, moves;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            // i represents rows, j represents columns
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                loc_i=i;
                loc_j=j;
            }
        }
    }
    moves = abs(loc_i-2)+abs(loc_j-2);
    cout<<moves<<"\n";
}