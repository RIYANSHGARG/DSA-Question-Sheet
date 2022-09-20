#include <bits/stdc++.h>

using namespace std;

void RecPermutation(vector<int>v, vector<vector<int>> ans, int freq[], vector<int>arrays){
    if(arrays.size() == v.size()){
        cout<<arrays[0]<<" "<<arrays[1]<<endl;
        ans.push_back(arrays);
        return;
    }
    for(int i=0;i<v.size();i++){
        if(!freq[i]){
            arrays.push_back(v[i]);
            freq[i] = 1;
            RecPermutation(v,ans,freq,arrays);
            freq[i] = 0;
            arrays.pop_back();
        }
    }
}

vector<vector<int>> permutation(vector<int> v){
    vector<vector<int>> ans;
    vector<int> arrays;
    int freq[v.size()] = {0};
    RecPermutation(v,ans,freq,arrays);
    return ans;
}

int main()
{
    int size;
    cin>>size;
    vector<int> v;
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    vector<vector<int>> ans = permutation(v);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";    
        }
        cout<<endl;
    }
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}