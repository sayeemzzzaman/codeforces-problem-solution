#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string word;
    int upperCount=0,lowerCount=0;
    cin >> word;

    for(int i=0; i< word.length(); i++){
        if((word[i] >= 'a') && (word[i] <= 'z'))lowerCount++;
        else if((word[i] >= 'A') && (word[i] <= 'Z'))upperCount++;
    }
    if(upperCount > lowerCount){
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        cout << word << endl;
    }
    else {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        cout << word << endl;
    }

}