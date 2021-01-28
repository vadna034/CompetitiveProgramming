# Vectors

## Preprocessor Directives

#include \<vector\>

## Constructors
 vector\<T\> v() - Initializes a new empty vector
 
 vector\<T\> v(int size) - Initializes a new empty vector with size size
 
 vector\<T\> v(int size, T value) - Initializes a new empty vector with size T, full of values value
 
 vector\<T\> v(vector<T> copy) - Initializes v with a copy of copy
 
 vector\<T\> v(vector<T>::iterator start, vector<T>::iterator end) - Initializes a vector with the values between the two iterators 

## Capacity

v.size() - Number of elements currently within the vector.

## Access

v[n] - Array style access of vector at index n

v.at(n) - Same as above

v.front() - Gets first element (index 0)

v.back() - Gets last element (index n)

## Modifiers

v.assign() : Same as constructor

v.push_back() : pushes element to the back of the vector

v.pop_back() : Removes element from the back of the vector. No return value (use access to return not modifier)

v.insert() : (iterator, value), (index, value) for single insert. (v-iterator, other-iterator-begin, other-iterator-end) for insert of multiple elements

v.erase() : iterator for single delete. 2 Iterators for range delete. 
