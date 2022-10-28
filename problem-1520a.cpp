#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        for(int i=0;i<n;i++){
            int j=i+1;
            char x = s[i];
            while(x==s[j]){
                j++;
            }
            
        }
    }
}