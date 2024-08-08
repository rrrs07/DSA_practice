// 1047. Remove All Adjacent Duplicates In String

// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

// We repeatedly make duplicate removals on s until we no longer can.

// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

// Example 1:

// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
// Example 2:

// Input: s = "azxxzy"
// Output: "ay"
 

// Constraints:

// 1 <= s.length <= 105


class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int index = 0;

        while(index < s.length()){

            // if ans ka right most character and string s ka current character is same then
            if(ans.length() > 0 && ans[ans.length()-1] == s[index]){
                //pop from the string
                ans.pop_back();
            }
            else{
                //push
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
    }
};