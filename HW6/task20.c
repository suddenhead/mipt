#include <stdio.h>

int main() {
    char ch;
    int balance = 0;
    int is_correct = 1;

    while (scanf("%c", &ch) == 1) {
        if (ch == '.') {
            break;
        }
        
        if (ch == '(') {
            balance++;
        } else if (ch == ')') {
            balance--;
            if (balance < 0) {
                is_correct = 0;
            }
        }
    }

    if (balance != 0) {
        is_correct = 0;
    }

    if (is_correct) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

