// 1160. Find Words That Can Be Formed by Characters
#include<iostream>
#include<vector>
using namespace std;

int countChars(vector<string> words, string chars){
     //first store the freq of char given in string chars
     //use map or a 26 sized array

     vector<int> charCount(26,0);

     for(char &ch: chars){
        charCount[ch-'a']++;
     }
     int result = 0;

     for(string &word:words){
        //check if this word is formed
        vector<int> wordcount(26,0);
        for(char &ch:word){
            wordcount[ch-'a']++;
        }

        bool ok=true;
        for(int i=0;i<26;i++){
            if(wordcount[i]>charCount[i]){
                ok=false;
                break;
            }
        }
        if(ok==true){
            result+=word.length();
        }
     }
     return result;
}
int main(){
    vector<string> words={"cat","bt","hat","tree"};
    string chars="atach";

    cout<<"Length of that string formed: "<<countChars(words,chars)<<endl;
    return 0;
}