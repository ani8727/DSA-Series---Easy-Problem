// 867. Transpose Matrix
#include<iostream>
#include<vector>
using namespace std;
 // time complexity-O(nm)
vector<vector<int>> transpose(vector<vector<int>>& matrix){
    int m=matrix.size();
    int n=matrix[0].size();

    vector<vector<int>> result(n,vector<int>(m));  //(nm)

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result[j][i]=matrix[i][j];
        }
    }
    return result;
}
// if matrix is square then we used a follow up approach 
// we not need to swap diagonal
void transposeInPlace(vector<vector<int>>& matrix){
    int n=matrix.size();
    // vector<vector<int>> result(n,vector<int>(m));  //(nm)
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}
// print 
void print(vector<vector<int>> matrix){
         for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
}
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
  
    vector<vector<int>> ans=transpose(matrix);
    print(ans);

    transposeInPlace(matrix);
    print(matrix);

    return 0;
}