// 647. Palindromic Substrings

// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

 

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 

// Constraints:

// 1 <= s.length <= 1000


class Solution {
public:

    int expand(string s, int i, int j){
        int count = 0;

        while(i >= 0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalCount = 0;

        for(int i = 0; i < s.length(); i++){
            // at center
            int j = i;
            int odd = expand(s, i, j);

             j = i+1;
            int even = expand(s, i, j);

            totalCount = totalCount + even + odd;
        } 
        return totalCount;
    }
};