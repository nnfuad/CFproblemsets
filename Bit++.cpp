#include <iostream>
#include <string.h>
using namespace std;
 int main(){
    int x=0,a;
    cin>>a;
    for(int i = 0 ; i<a ; i++){
        string str;
     
        cin>>str;
        if(str.compare("X++") == 0 || str.compare("++X") == 0){
            x++;
        }
        else if(str.compare("X--")==0 || str.compare("--X")==0){
            x--;
        }
    }
    cout<<x<<endl;
 }