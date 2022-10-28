#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int check=0,count=0;
    for(int i=0; i<n;i++){
        int temp;
        cin >> temp;
        if(temp>0)check = check+temp;
        if(temp==-1 && check<=0){
            count++;
        }
        if(temp==-1 && check>0) {
            check--;
        }
    }
    cout << count << endl;
}