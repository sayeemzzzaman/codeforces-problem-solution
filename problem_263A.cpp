#include<iostream>

using namespace std;

int main(){
    int arr[5][5];
    int storei,storej;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                storei = i;
                storej = j;
            }
        }
    }
    int count = 0;
    while(storei != 2){
        storei>2? storei--:storei++;
        count++;
    }
    while(storej != 2){
        storej>2? storej--:storej++;
        count++;
    }
    cout << count << endl;
}