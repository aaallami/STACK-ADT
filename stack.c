#include <stdio.h>
#include <stdlib.h>

// Define the fixed size (capacity) of the stack
#define STACK_CAPACITY 2

// Define a stack structure with a dynamic array and a top index
typedef struct {
    int* data;  // Pointer to dynamically allocated stack memory
    int top;    // Index of the top element in the stack; -1 means stack is empty
} stack_t;

// Initialize an empty stack
void init(stack_t* s) {
    s->data = (int*)malloc(-----1)Fill in the blank---------);  // Allocate memory for stack
    if (s->data == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);  // Terminate the program if memory allocation fails
    }    
    s->top = -1;  // Set top to -1 to indicate an empty stack
}

// Push an integer to the top of the stack
void push(stack_t* s, int value) {
    // Check if the stack is full before pushing
    if (-----2)Fill in the blank---------) {
        printf("Stack overflow!\n");  // Cannot push more elements
        return;
    }

    // Increment top and add value to the stack
    s->top = s->top + 1;
    s->data[s->top] = value;
}

// Pop an integer from the top of the stack
void pop(stack_t* s) {
    // Check if the stack is empty before popping
    if (-----3)Fill in the blank---------) {
        printf("Stack underflow!\n");  // Cannot pop from an empty stack
        return;
    }

    // Get the value from the top of the stack
    int tmp = s->data[s->top];

    // Decrement top to remove the top element
    s->top = s->top - 1;

    // Print the popped value
    printf("Popped: %d\n", -----4)Fill in the blank---------);
}

// Free the dynamically allocated memory used by the stack
void destroy(stack_t* s) {
    free(-----5)Fill in the blank---------);
}

// Main function to demonstrate stack operations
int main() {
    stack_t stack;
    init(&stack);  // Initialize the stack

    // Push three integers (last one will cause overflow)
    push(&stack, 10);  // Push 10
    push(&stack, 20);  // Push 20
    push(&stack, 30);  // Will trigger overflow (stack size is only 2)

    // Pop and print all stack elements
    pop(&stack);  // Should print 20
    pop(&stack);  // Should print 10
    pop(&stack);  // Will trigger underflow (stack is now empty)

    // Free allocated memory
    destroy(&stack);
    return 0;
}
