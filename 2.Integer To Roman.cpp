Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.

 

Example 1:

Input: num = 3
Output: "III"
Example 2:

Input: num = 4
Output: "IV"
Example 3:

Input: num = 9
Output: "IX"
Example 4:

Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.
Example 5:

Input: num = 1994
Output: "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

Constraints:

1 <= num <= 3999
  
  
  
  
  class Solution {
public:
    string val(int x, int place)
    {
        if(place==0)
        {
           if(x==1)
               return "I";
            else if(x==2)
                return "II";
            else if(x==3)
                return "III";
            else if(x==4)
                return "IV";
            else if(x==5)
                return "V";
            else if(x==6)
                return "VI";
            else if(x==7)
                return "VII";
            else if(x==8)
                return "VIII";
            else if(x==9)
                return "IX";
            else return "";
        }
        
        else if(place==1)
        {
            if(x==1)
               return "X";
            else if(x==2)
                return "XX";
            else if(x==3)
                return "XXX";
            else if(x==4)
                return "XL";
            else if(x==5)
                return "L";
            else if(x==6)
                return "LX";
            else if(x==7)
                return "LXX";
            else if(x==8)
                return "LXXX";
            else if(x==9)
                return "XC";
            else return "";
        }
        else if(place==2)
        {
            if(x==1)
               return "C";
            else if(x==2)
                return "CC";
            else if(x==3)
                return "CCC";
            else if(x==4)
                return "CD";
            else if(x==5)
                return "D";
            else if(x==6)
                return "DC";
            else if(x==7)
                return "DCC";
            else if(x==8)
                return "DCCC";
            else if(x==9)
                return "CM";
            else return "";
        }
        else{
            if(x==1)
               return "M";
            else if(x==2)
                return "MM";
            else if(x==3)
                return "MMM";
           
        }
        return "";
    }
    string intToRoman(int num) {
        vector<int> digit;
        while(num>0)
        {
            digit.push_back(num%10);
            num=num/10;
        }
        reverse(digit.begin(), digit.end());
        string ans="";
        int len= digit.size();
        for(int i=0;i<len;i++)
        {
            int place=len-i-1;
            ans=ans+val(digit[i],place);
        }
        return ans;
    }
};
  
