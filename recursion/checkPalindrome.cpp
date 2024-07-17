#include<bits/stdc++.h>


using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while (start < end) {
            if (!isalnum(s[start])) {
                start++;
                continue;
            }
            if (!isalnum(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end])) return false;
            start++;
            end--;
        }
        return true;
    }
};


int main() {
    Solution solution;
    string test = "A man, a plan, a canal: Panama";
    if (solution.isPalindrome(test)) {
        cout << "\"" << test << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << test << "\" is not a palindrome." << endl;
    }
    return 0;
}
