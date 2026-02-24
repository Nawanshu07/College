#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void push(char stack[], int *sp, char ch) {
  if (*sp == MAX - 1)
    printf("Error: Stack Overflow\n");
  else
    stack[++(*sp)] = ch;
}

char pop(char stack[], int *sp) {
  if (*sp < 0) {
    printf("Error: Stack Underflow\n");
    return '\0';
  } else
    return stack[(*sp)--];
}

int isOperand(char ch) {
  return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
          (ch >= '0' && ch <= '9'));
}

int isOperator(char ch) {
  return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

int precedence(char ch) {
  switch (ch) {
  case '+':
  case '-':
    return 1;
  case '*':
  case '/':
    return 2;
  case '^':
    return 3;
  }
  return 0;
}

void reverse(char str[]) {
  int n = strlen(str);
  for (int i = 0; i < n / 2; i++) {
    char temp = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = temp;
  }
}

int main() {
  char infix[MAX], prefix[MAX], stack[MAX];
  int i, j = 0, sp = -1;

  printf("Enter Infix Expression: ");
  fgets(infix, MAX, stdin);

  infix[strcspn(infix, "\n")] = '\0';

  reverse(infix);

  for (i = 0; infix[i] != '\0'; i++) {
    if (infix[i] == '(')
      infix[i] = ')';
    else if (infix[i] == ')')
      infix[i] = '(';
  }

  for (i = 0; infix[i] != '\0'; i++) {
    char ch = infix[i];

    if (isOperand(ch)) {
      prefix[j++] = ch;
    } else if (ch == '(') {
      push(stack, &sp, ch);
    } else if (ch == ')') {
      while (sp >= 0 && stack[sp] != '(')
        prefix[j++] = pop(stack, &sp);
      pop(stack, &sp); // remove '('
    } else if (isOperator(ch)) {
      if (ch == '^') {

        while (sp >= 0 && precedence(stack[sp]) >= precedence(ch))
          prefix[j++] = pop(stack, &sp);
      } else {
     
        while (sp >= 0 && precedence(stack[sp]) > precedence(ch))
          prefix[j++] = pop(stack, &sp);
      }
      push(stack, &sp, ch);
    }
  }

  while (sp >= 0)
    prefix[j++] = pop(stack, &sp);

  prefix[j] = '\0';
  reverse(prefix);

  printf("Prefix Expression: %s\n", prefix);

  return 0;
}
