// 1903. Largest Odd Number in String

#include<iostream>
using namespace std;

string largestOddS(string num){
    for(int ch=num.length()-1;ch>=0;ch--){
        if((num[ch]-'0')%2!=0){
            return num.substr(0,ch+1);
        }
    }
    return "";
}
int main(){
    string num="52";
    cout<<"Largest odd String: "<<largestOddS(num)<<endl;
    return 0;
}