#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char str[100];
    int a;
    cin>>a;
    for(int i=0 ; i<a ; i++){
    cin>>str;
    if(strlen(str)>10){
        cout<<str[0]<<strlen(str)-2<<str[strlen(str)-1]<<endl;
    }
    else cout<<str<<endl;
    }
}