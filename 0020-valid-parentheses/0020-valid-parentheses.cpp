class Solution {
public:
    bool isValid(string s) {
        // Hint 1
        stack<char> cStack;

        for (int i = 0; i < s.length(); i++)
        {
            char curr = s.at(i);

            // Hint 2
            if (curr == '(' || curr == '[' || curr == '{')
            {
                cStack.push(curr);
                cout << "hin1: " << cStack.top() << endl;
                // Hint 3
            } else if (curr == ')' || curr == ']' || curr == '}')
            {
                if (cStack.empty())
                {
                    return false;
                }

                char top = cStack.top();
                cStack.pop();

                // Hint 3 if yes
                if ((curr == ')' && top != '(') || 
                    (curr == '}' && top != '{') || 
                    (curr == ']' && top != '[')) {
                    return false;
                }
            }
        }
    
        return cStack.empty();
    }
};