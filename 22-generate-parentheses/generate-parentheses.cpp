class Solution {
public:
     vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        backtrack(ans, "", 0, 0, n);
        
        return ans;
    }

    void backtrack(vector<string>& ans, string current,
                   int open, int close, int n) {
        
        // Valid complete combination
        if (current.length() == 2 * n) {
            ans.push_back(current);
            return;
        }

        // Add '(' if we still have opening brackets
        if (open < n) {
            backtrack(ans, current + "(", open + 1, close, n);
        }

        // Add ')' only if it doesn't make brackets invalid
        if (close < open) {
            backtrack(ans, current + ")", open, close + 1, n);
        }
    }
};