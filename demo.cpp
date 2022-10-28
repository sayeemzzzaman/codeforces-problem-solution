#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin >>t;
    while(t--){
        int n,m,count=0;
        int isPrime=0;
        cin >> n >> m;
        for(int i=n;i<=m;i++){
            if(i==1){
                //count++;
                i++;
                //continue;
            }
            isPrime = 0;
            for(int j=2;j<=i/2;j++){
                if(i % j == 0){
                 isPrime = 1;
                 break;
                }
                
            }
            if(isPrime==0){count++;}
            
        }
        cout << count << endl;
        count = 0;
    }
    
    return 0;
}

