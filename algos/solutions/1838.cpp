#include<bits/stdc++.h>
using namespace std;

unordered_map<int, int> getHashMap(vector<int>& nums){
    unordered_map<int, int> hashMap;
    for(int x: nums) hashMap[x]++;
    return hashMap;
}

pair<int, int> maxFreqFromHashMap(unordered_map<int,int> hashMap){
    pair<int, int> maxFrequency = *hashMap.begin();
    for (auto p: hashMap){
        if(p.second > maxFrequency.second) maxFrequency = p;
    }
    return maxFrequency;
}

vector<pair<int,int>> sortUnorderedMapByValue(unordered_map<int,int> hashMap, bool ascending=false){    
    vector<pair<int,int>> sortedDict(hashMap.begin(), hashMap.end());
    if (ascending){
        sort(
            sortedDict.begin(), 
            sortedDict.end(), 
            [](auto &a, auto &b){
                return a.second < b.second
            }
        );
    }
    else{
        sort(
            sortedDict.begin(), 
            sortedDict.end(), 
            [](auto &a, auto &b){
                return a.second > b.second
            }
        );
    }   
    return sortedDict;
}

/*
----------------
[1,2,4] -> 5
1 - 111
2 - 11
4 - 
----------------
[1,4,8,13] -> 5
1 - 
4 - 
8 - 
13 - 
----------------
*/

int maxFrequency(vector<int>& nums, int k) {
    unordered_map<int, int> hashMap = getHashMap(nums);
    vector<pair<int,int>> sortedDict = sortUnorderedMapByValue(hashMap);
    
    // pair<int, int> maxFreq = maxFreqFromHashMap(hashMap);
    for(auto it=sortedDict.begin(); it!=sortedDict.end(); it++){
                
    }

}

int main() {

    vector <int> vec = {1, 2, 4};
    int k = 5;
    cout << maxFrequency(vec, k);
    
    return 0;
}