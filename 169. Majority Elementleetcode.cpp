class Solution {
public://better way in soln-booyre-moorevoting algo
//https://leetcode.com/problems/majority-element/
    int majorityElement(vector<int>& a) {
       unordered_map<int,int> m;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
        }
        int x=a.size()/2;
        x++;
        
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>=x){
                return it->first;
            }
        }
        return 1;
    }
};