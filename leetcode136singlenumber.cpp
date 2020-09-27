//https://leetcode.com/problems/single-number/
class Solution {
public:
    int singleNumber(vector<int>& a) {
        ///xor soln
        int c=0;
        for(int i=0;i<a.size();i++){
          
            c^=a[i];
        }
        
        return c;
    }
};