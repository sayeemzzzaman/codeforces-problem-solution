#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int temp;
        cin >> temp;
        if(temp==1 || temp==2){
            cout << "0" << endl;
        }
        else if(temp%2==0){
            cout << temp/2-1 << endl;
        }
        else {
            cout << temp/2 << endl;
        }
    }
}