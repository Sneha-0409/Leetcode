#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    char st[10000];
    int top = -1;
    int n = strlen(s);
    for(int i = 0; i < n; i++) {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st[++top] = s[i];
        }
        else {
            if(top == -1)
                return false;
            char ch = st[top--];
            if((s[i] == ')' && ch != '(') ||
               (s[i] == ']' && ch != '[') ||
               (s[i] == '}' && ch != '{'))
                return false;
        }
    }
    return top == -1;
}