Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.

 

Example 1:

Input: n = 13
Output: 6
Example 2:

Input: n = 0
Output: 0
 

Constraints:

0 <= n <= 109


class Solution {
public:
    int countDigitOne(int n) {
            int number = 0;
    for (long long i=1;i<=n;i=i*10)
    {
        long long divide = i * 10;
        number = number + (n/divide) * i+min(max(n%divide-i+1,0LL),i);
    }
        return number;
    }
};
