#########################################################
## LintCode Number 82 Single Number
## Problem description see:
## http://www.lintcode.com/en/problem/single-number/
#########################################################

class Solution {
public:
	/**
	 * @param A: Array of integers.
	 * return: The single number.
	 */
    int singleNumber(vector<int> &A) {
        int result=0;
        for(int i = 0;i<A.size();i++){
            result = result^A[i];
        }
        return result;
    }
};
