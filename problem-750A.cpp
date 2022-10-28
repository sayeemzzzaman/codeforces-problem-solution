#include<iostream>
using namespace std;
int main(){
    int probs,dist,count=0;
    cin >> probs >> dist;
    int t = dist;
    for(int i=1;i<=probs;i++){
        int check = t + (5*i); //1+ >> 5 10 15 20 25 30 35
        if(check<=240){
            t = check;
            count++;
        }
        else {
            cout << count;
            return 0;
        }
        
    }
    cout << count;
}