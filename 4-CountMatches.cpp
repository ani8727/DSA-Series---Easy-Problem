// 1688. Count of Matches in Tournament

#include<iostream>
using namespace std;

/*
int countMatch(int n){
    int matches=0;
    while(n>1){
        if(n%2==0){
            matches+=n/2;
            n=n/2;
        } else{
            matches+=(n-1)/2;
            n=(n-1)/2+1;
        }
    }
    return matches;
}
*/
//optimal apprach => if n team play n-1 team elimate 1 team winner an 1 match 1 team eliminate so n-1 team elimate and n-1 match played

int countMatch(int n){
    return n-1;
}
int main(){
    cout<<"No. of matches Palyed: "<<countMatch(14)<<endl;
    return 0;
}