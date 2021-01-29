# Stack

## Preprocessor Directives

#include \<stack\>

## Constructors

Stack<T> s() - Initializes a new empty stack

Stack<T> s(vector<T> v); - Initializes a stack from a vector

Stack<T> s(deque<T> d); - Initializes stack from a deque

## Methods

s.empty() - Bool, empty or not

s.size() - Number elements on stack

s.top() - Next element

s.push() - push onto stack (returns nothing)

s.pop() - Remove top of stack (returns nothing)
