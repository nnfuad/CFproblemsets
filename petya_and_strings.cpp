#include <iostream>
#include <math.h>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    std::transform(a.begin(), a.end(), a.begin(), ::toupper);
    std::transform(b.begin(), b.end(),b.begin(), ::toupper);
    if((a.compare(b))==1){
    cout<<1<<endl;
    }
    else if((a.compare(b))==0){
    cout<<0<<endl;
    }
    else if((a.compare(b))<0){
    cout<<-1<<endl;
    }
}