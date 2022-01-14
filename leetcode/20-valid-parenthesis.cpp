#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s)
    {
        vector<char> stack;
        char current;
        char previous = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            current = s[i];
            if (previous) {
                if (current == '{' || current == '[' || current == '(') {
                    stack.push_back(current);
                    previous = current;
                } else if ((current == ')' && previous == '(') || (current == '}' && previous == '{') || (current == ']' && previous == '[')) {
                    stack.pop_back();
                    previous = stack[stack.size() - 1];
                } else {
                    stack.push_back(current);
                    previous = current;
                }
            } else if (current == '}' && current == ']' && current == ')') {
                return false;
            } else {
                stack.push_back(current);
                previous = current;
            }
        }

        cout << "size finally " << stack.size() << endl;
        if (stack.size() > 0)
            return false;
        return true;
    }
};

int main()
{
    Solution sol;
    string test[] = {
        "()", "}", "{}",
        "[]", "(){}[]", "({[]})", "(}", "}(", "(){{}}"
    };
    // string test[] = { "(){}[]" };
    int size = sizeof(test) / sizeof(string);

    cout << "Size:: " << size << endl;
    for (int i = 0; i < size; i++) {
        bool res = sol.isValid(test[i]);
        cout << test[i] << "   ->  " << res << endl;
    }
    // sol.isValid()
    return 0;
}