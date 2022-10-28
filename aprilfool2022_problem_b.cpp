#include<iostream>
using namespace std;

int main(){
    int seq[] = {1200,1400,1600,1900,2100,2300,2400,2600,3000};
    int n;
    cin >> n;
    for(int i=0; i<9; i++){
        if(seq[i]>n){
            cout << seq[i];
            return 0;
        }
    }
}