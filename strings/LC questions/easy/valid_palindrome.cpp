// 680. Valid Palindrome II

// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false
 

 class Solution {
public:


    // bool function to check if the string is palindrome or not
    bool checkPalindrome(string s, int i, int j){
        while(i<=j){
            if(s[i] != s[j]) return false;
            else 
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while(i<j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                //s[i] != s[j]
                //1 removal allowed
                //check palindrome for remaining string after removal

                //ith character -> remove
                bool ans1 = checkPalindrome(s, i+1, j);

                //jth character -> remove
                bool ans2 = checkPalindrome(s, i, j-1);

                return ans1 || ans2;
            }
        }

        return true;
    }
};