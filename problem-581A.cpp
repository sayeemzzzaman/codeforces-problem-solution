#include<iostream>
using namespace std;
int main(){
    int red,blue,count=0,count2=0;
    cin >> red >> blue;
    while(red>=1 && blue>=1){
        count++;
        red--;
        blue--;
    }

    if(red>=2){
        count2+=red/2;
    }
    if(blue>=2){
        count2+=blue/2;
    }
        
    cout << count <<" " << count2;
}