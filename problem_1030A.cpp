#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(temp == 1){cout << "HARD";return 0;}
    }
    cout << "EASY";
}