// 1436. Destination City

#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
//using hashMap
string cityM(vector<vector<string>> paths){
    unordered_map<string, int> mp;

    for(auto &path:paths){
        string source=path[0];
        mp[source]=1;
    }
    for(auto &path:paths){
        string dest=path[1];
        if(mp[dest]!=1){
            return dest;
        }
    }
    return "";
}
//using hashSet
string cityS(vector<vector<string>> paths){
    unordered_set<string> st;

    for(auto &path:paths){
        string source=path[0];
        st.insert(source);
    }
    for(auto &path:paths){
        string dest=path[1];
        if(st.find(dest)==st.end()){
            return dest;
        }
    }
    return "";
}
int main(){
    vector<vector<string>> paths={
        {"London","New York"},
        {"New York", "Lima"},
        {"Lima","Sao Paulo"}
    };
    cout<<"Destination City: "<<cityS(paths)<<endl;
    cout<<"Destination City: "<<cityM(paths)<<endl;
   
    return 0;
}
