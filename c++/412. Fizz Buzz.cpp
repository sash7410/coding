class Solution {
//https://leetcode.com/problems/fizz-buzz/submissions/
public:
    vector<string> fizzBuzz(int n) {
       vector<string> b;
        string l,o,l1;
        l+="FizzBuzz";
        o+="Fizz";
        l1+="Buzz";
        for(int i=1;i<=n;i++){
            if(i%3==0&&i%5==0)
                b.push_back(l);
            else if(i%3==0){
                b.push_back(o);
            }
            else if(i%5==0){
                 b.push_back(l1);
            }
            else{
                b.push_back(to_string(i));
            }
        }
        return b;
    }
};