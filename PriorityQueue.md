# Priority Queue

Heap with sorting based upon a priority funciton 

## Preprocessor Directives

#include /<queue/>

#include /<functional/> (only used in the case that you want to easily create a min-heap)

## Constructors

Constructors are mostly the same for those of type queue. You must define the types within the priority queue using a template, using rules as follows. 

```c++
std::priority_queue<T> pq // Creates a max-heap of type T for c++ built in types

std::priority_queue<T, vector<T>> pq // Creates a max-heap of type T (must have comparison defined)

std::priority_queue<T, vector<T>, std::less<T>>  // Easy definition of a min-heap for non user-defined data types

typedef std::priority_queue<T, std::vector<T>, comparison(T val1, T val2)> q - Defines a new type named q which is a priority queue of type T sorted by the comparison function

```

## Methods

pq.empty() - Checks if priority queue is empty 

pq.size() - Returns size of the priority queue

## Acessors

pq.top() - Returns top of the priority queue 

## Modifiers

pq.push() - Pushes into the priority queue

pq.pop() - Pops from the priority queue
