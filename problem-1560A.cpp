#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int j=1;
        for(int i=1;;i++){
            if(i%3!=0 && (i%10)!=3){
                if(j==n){
                    cout << i << endl;
                    break;
                }
                j++;
            }
        }
    }
}