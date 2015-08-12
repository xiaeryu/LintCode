/*
LintCode Number 365 Count 1 in Binary
Problem description see:
http://www.lintcode.com/en/problem/count-1-in-binary/
*/

class Solution {
public:
    /**
     * @param num: an integer
     * @return: an integer, the number of ones in num
     */
    int countOnes(int num) {
        int count = 0;
        while (num > 0){
            count += 1;
            num = num & (num-1);
        }
        return count;
    }
};
