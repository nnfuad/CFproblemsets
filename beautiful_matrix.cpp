#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int count=0;
    int a[5][5];
    for(int i=0 ; i<5 ;i++){
        for(int j=0 ; j<5 ; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0 ; i<5 ;i++){
        for(int j=0 ; j<5 ; j++){
            if(a[i][j]==0){
                continue;
            }
            else if(a[i][j]==1 &&( i!=2 || j!=2)){
                count=(abs(2-i)+abs(2-j));
                break;
            }
            else if(a[i][j]==1 && i==2 && j==2) break;
        }
    }
    cout<<count<<endl;
}