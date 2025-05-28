// 2264. Largest 3-Same-Digit Number in String
#include<iostream>
using namespace std;

string goodString(string num){
    int n=num.length();

    char maxChar=' ';

    for(int i=2;i<n;i++){
        if(num[i]==num[i-1] && num[i]==num[i-2]){//3 length substring same digit
            maxChar=max(maxChar,num[i]);
        }
    }
    if(maxChar==' '){
        return "";
    }
    return string(3,maxChar);
}
int main(){
    string num= "6777133339";
    cout<<"Stirng : "<<goodString(num)<<endl;
    return 0;
}