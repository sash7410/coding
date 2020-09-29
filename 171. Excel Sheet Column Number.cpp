class Solution {
//https://leetcode.com/problems/excel-sheet-column-number/
public:
    int titleToNumber(string a) {
        int j=a.length();
        j--;
        int sum=0;
        for(int i=0;i<a.length();i++){
            int z=pow(26,j);
            //cout<<z<<" ";
            z=z*(a[i]-'A'+1);
           // cout<<z<<endl;
            sum=sum+z;
            j--;
            //sum*=10;
        }
        return sum;
    }
};