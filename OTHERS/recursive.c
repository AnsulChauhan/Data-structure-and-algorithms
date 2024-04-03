#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


bool expr(char **input);
bool term(char **input);
bool factor(char **input);


bool expr(char **input) {
    if (!term(input))
        return false;

    while (**input == '+' || **input == '-') {
        (*input)++;
        if (!term(input))
            return false;
    }

    return true;
}

bool term(char **input) {
    if (!factor(input))
        return false;

    while (**input == '*' || **input == '/') {
        (*input)++;
        if (!factor(input))
            return false;
    }

    return true;
}


bool factor(char **input) {
    if (isdigit(**input)) {
        (*input)++;
        return true;
    }
    else if (**input == '(') {
        (*input)++;
        if (!expr(input))
            return false;
        if (**input == ')') {
            (*input)++;
            return true;
        }
        else
            return false;
    }
    else if (**input == 'i') {
        (*input)++;
        return true;
    }
    else
        return false;
}


int main() {
    char input[100];
    printf("Enter an arithmetic expression: ");
    scanf("%s", input);
    char *ptr = input;

    if (expr(&ptr) && (*ptr == '\0' || *ptr == '+' || *ptr == '-'))
        printf("Valid arithmetic expression.\n");
    else
        printf("Invalid arithmetic expression.\n");

    return 0;
}