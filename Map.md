# Map

Map is a data structure mapping keys to values. It stores the keys in ordered fashion. O(log n)) access, and O(log n)) insertion. 

## Preprocessor Directives

#include \<map\>

## Constructor

```c++
std::map<char,int> first; // Initialize empty map

std::map<char,int> second (first.begin(),first.end()); // Initialize map copy of first

std::map<char,int> third (second); // Initialize map copy of second

std::map<char,int,classcomp> fourth; // Initialize map with a comparison class

bool(*fn_pt)(char,char) = fncomp;
std::map<char,int,bool(*)(char,char)> fifth (fn_pt); // Initialize map with a comparison function
```

## Iterators

.begin() - iterator to beginning of the map

.end() - iterator to end of the map

.rbegin() - iterator to end of the map iterating in reverse

.rend() - iterator to the beginning of the map iterating in reverse

## Access

## Modifiers

.insert() - Inserts a pair into the map

.erase() - Erases a key from the map

.clear() - Clears the map contents

## Operations

.find() - Returns iterator to a key

.count() - Returns count of a specific key. Always 1 or 0. 

.lower_bound() - Returns iterator to first value with value less than or equal to arguemnt

.upper_bound() - Returns Iterator to first value with value greater than argument

.equal_range() - Returns iterator to keys with values equal to input argument

