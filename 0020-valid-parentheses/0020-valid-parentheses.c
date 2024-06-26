#include <stdbool.h>

#define MAX_SIZE 10000

struct Stack {
    char items[MAX_SIZE];
    int top;
};

void initialise(struct Stack* stack){
    stack->top = -1;
}

bool isFull(struct Stack* stack){
    return stack->top == MAX_SIZE - 1;
}

bool isEmpty(struct Stack* stack){
    return stack->top == -1;
}

void push(struct Stack* stack, char value){
    if(isFull(stack)){
        return;
    }
    stack->items[++stack->top] = value;
}

char pop(struct Stack* stack){
    if(isEmpty(stack)){
        return '\0';
    }
    return stack->items[stack->top--];
}

bool isParanthesis(char ch){
    return (ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}');
}

bool isMatchingPair(char opening, char closing){
    return ((opening == '(' && closing == ')') || (opening == '[' && closing == ']') || (opening == '{' && closing == '}'));
}

bool isValid(char* s) {
    struct Stack myStack;
    initialise(&myStack);
    bool stackEmpty = true;

    for(int i = 0; s[i] != '\0'; i++){
        if(isParanthesis(s[i])){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                push(&myStack, s[i]);
                stackEmpty = false; 
            }
            else{
                if(stackEmpty || !isMatchingPair(pop(&myStack), s[i])){
                    return false;
                }
                stackEmpty = isEmpty(&myStack); 
            }
        }
    }
    return isEmpty(&myStack);
}
