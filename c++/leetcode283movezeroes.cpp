class Solution {
public:
   /* void moveZeroes(vector<int>& a) {
        int c=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                a.erase(a.begin()+i);
                i--;
                c++;
            }
        }
        while(c--){
            a.push_back(0);
        }
    }*/
    void moveZeroes(vector<int>& a) {
        int c=0;
        int j=0;//slowpointer soln
        for(int i=0;i<a.size();i++){
            if(a[i]!=0){
                swap(a[j],a[i]);j++;
            }
        }
        
    }
};