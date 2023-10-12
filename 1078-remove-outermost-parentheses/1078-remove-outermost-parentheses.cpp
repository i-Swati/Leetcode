class Solution {
public:
    string removeOuterParentheses(string s) {
    string result;
    stack<char> parenthesesStack;
    int start = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            parenthesesStack.push('(');
        } else {
            parenthesesStack.pop();
            if (parenthesesStack.empty()) {
                result += s.substr(start + 1, i - start - 1);
                start = i + 1;
            }
        }
    }

    return result;
}

};