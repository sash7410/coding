class Solution {
//https://leetcode.com/problems/contains-duplicate/
public:
    bool containsDuplicate(vector<int>& a) {
        unordered_map<int,int> m;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
            if(m[a[i]]==2)
                return 1;
        }
        return 0;
    }
};