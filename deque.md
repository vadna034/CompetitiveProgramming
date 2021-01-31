# Deque 

Multi-ended queue. Allows pushes and pops into either end of the queue

## Preprocessor Directive

#include \<deque\>

## Iterators

d.begin() - Iterator to begin of the deque 

d.end() - Iterator to end of the deque

d.rbegin() - Iterator to the end of the deque, iterating in reverse

d.rend() - Iterator to the begin of the deque, iterating in reverse

## Capacity

d.size() - Number of elements on the deque  

d.empty() - Tests if number of elements on the deque is zero

## Modifiers

d.push_back() - Push to the back of the deque 

d.push_front() - Push to the front of the deque (index 0)

d.pop_front() - Pop from the front of the deque (returns nothing)

d.pop_back() - Pop from the back of the deque (returns nothing)

d.insert() - Insert into the deque

d.clear() - Clear the deque of all contents

## Element Access

d.at(int index) - Access element at index

d.front() - Access element at front of the deque (index 0)

d.back() - Access element at the back of the deque

d[int index] - Access element at index
