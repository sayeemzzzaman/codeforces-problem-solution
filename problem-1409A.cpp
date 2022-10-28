#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a==b){cout << "0" << endl;}
        else{
            if(abs(a-b)%10==0){ //30%10 == 0
                cout << abs(a-b)/10 << endl; //30/10 = 3(3steps>3x10)
            }
            else{
                cout << abs(a-b)/10+1 << endl; //39/10 = 3.9 == 3+1 ==4steps (3x10 + 1x9)
            }
        }
    }
}