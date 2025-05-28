// 389. Find the Difference
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

//using map  -> Tc -n| Sc-n
/*char findDiff(string s, string t){
    unordered_map<char, int> mp;
    for(auto &i:s){
      mp[i]++;
    }
    for(auto &i:t){
        if(mp.find(i)==mp.end() || mp[i] == 0){
            return i;
        }
        mp[i]--;
    }
    return 0;
}
*/

// using sum  -> Tc-n | Sc-1
/*char findDiff(string s, string t){
    int s_Sum=0;
    int t_Sum=0;
    for(char ch:s){
        s_Sum+=(int)ch;
    }
    for(char ch: t){
        t_Sum+=(int)ch;
    }
    return char(t_Sum-s_Sum);
}
*/
char findDiff(string s, string t){
    int Xor = 0;
    for(char ch : s){
        Xor ^= ch;
    }
    for(char ch : t){
        Xor ^= ch;
    }
    return (char)Xor;
}
int main(){
    string s="a";
    string t="aa";

    cout<<"new add char: "<<findDiff(s,t)<<endl;

    return 0;
}