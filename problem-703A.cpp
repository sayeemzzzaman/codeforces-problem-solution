#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int countM=0,countC=0;
    while(t--){
        int mishka,chris;
        cin >> mishka >> chris;
        if(mishka>chris)countM++;
        else if(mishka<chris)countC++;
    }
    if(countM>countC)cout << "Mishka";
    else if(countM<countC)cout << "Chris";
    else cout << "Friendship is magic!^^";
}