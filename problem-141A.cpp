#include<iostream>
using namespace std;
int main(){
    string line1,line2,line3;
    cin >> line1 >> line2 >> line3;
    int alpha[100]={0};// 65-90

    for(int i=0; i<line1.size(); i++){
        int ascii= line1[i];
        alpha[ascii]++;
    }
    for(int i=0; i<line2.size(); i++){
        int ascii= line2[i];
        alpha[ascii]++;
    }
    for(int i=0; i<line3.size(); i++){
        int ascii= line3[i];
        alpha[ascii]--;
    }
    for(int i=65; i<=90; i++){
        //cout << alpha[i] << " ";
        if(alpha[i]!=0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}