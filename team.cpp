#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int a,c=0;
    cin>>a;
    for(int i=0 ; i< a; i++){
        int f1,f2,f3;
        cin>>f1>>f2>>f3;
        if((f1+f2) == 2 || (f1+f3)==2 || (f2+f3)==2){
            c++;
        }
    }
    cout<<c<<endl;

}