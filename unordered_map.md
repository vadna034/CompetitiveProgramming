# unordered_map

Unordered map allows for mapping of key value pairs in an unordered fashion. O(1) insertion and O(1) access. 

## Constructors

```c++
unordered_map<T, T2> first;                              // empty
unordered_map<T, T2> second ( {{"apple","red"},{"lemon","yellow"}} );       // init list
unordered_map<T, T2> third ( {{"orange","orange"},{"strawberry","red"}} );  // init list
unordered_map<T, T2> fourth (second);                    // copy
unordered_map<T, T2> fifth (merge(third,fourth));        // move
unordered_map<T, T2> sixth (fifth.begin(),fifth.end());  // range
```
## Capacity
m.size() - Number of keys in the map

m.empty() - Tests if there are zero keys in the map

## Iterators

begin() - Iterator to beginning of map

end() - Iterator to end of map

rbegin() - Iterator to end of map iterating in reverse

rend() - Iterator to beginning of map iterating in reverse

## Access

[] - Access like arrays. Pass key to operator, and value will be accessed if it exists. 

.at() - Access same as above. Throws exception if key is not in the map

## Modifiers

[] - If used on left half of assignment operator, then value of key is assigned

.insert() - Can be passed pair, vector of vectors, or iterators to range of vectors. Adds these key value pairs to the map

.erase() - Remove element from the map

.clear() - Empty contents of the map
