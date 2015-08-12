/*
#########################################################
## LintCode Number 9 Fizz Buzz
## Problem description see:
## http://www.lintcode.com/en/problem/fizz-buzz/
#########################################################
*/

class Solution {
public:
    /**
     * param n: As description.
     * return: A list of strings.
     */
    vector<string> fizzBuzz(int n) {
        vector<string> results;
        for(int i =1;i<=n;i++){
            if((i%3)==0 && (i%5)==0){
                results.push_back("fizz buzz");
            }else if((i%3)==0){
                results.push_back("fizz");
            }else if((i%5==0)){
                results.push_back("buzz");
            }else{
                results.push_back(to_string(i));
            }
        }
        return results;
    }
};
