#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m; //9 3 --           3 6 9 12
    for(int i=1; m*i<=n; i++){
        n++;                    //n= 10 11 12 13
        //cout <<m*i<<" " << n << endl;
    }

    cout << n;
}