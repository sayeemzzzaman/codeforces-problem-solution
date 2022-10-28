#include<iostream>
using namespace std;

int main(){
    string n;
    cin >> n;
    int countZero=0,countOne=0,flag=0;
    for(int i=0; i<n.length(); i++){
        if(((int)n[i])==49)countOne++;
        else countOne=0;

        if(((int)n[i])==48)countZero++;
        else countZero=0;
    //cout << "...." << countOne << ">>> "<< countZero;
        if((countOne >= 7)|| (countZero >= 7))flag=1;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}