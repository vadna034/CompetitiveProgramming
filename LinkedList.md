#Linked List

In c++ there are 2 classes which implement a linked list. The first being Forward List, representing a singularly linked list. The second being List, representing a doubly linked list

## ListNode Class

```c++
class ListNode(){
  public:
    T data;
  private:
    ListNode* next;
};
```
## Operations

### Reverse a Linked List

```c++
ListNode* ReverseList(ListNode head){
  if(head == null || head.next == null){
    return head;
  }
  ListNode p = reverseList(head -> next);
  head.next.next = head;
  head.next = null;
  retunr p
}
```

### Delete from a linked list

```c++
ListNode* deleteNode(ListNode* head, T val){
  cur = head;
  prev = nullptr;
  while(cur != nullptr){
    if(cur -> val == val){
      head = delete(head, cur, prev);
      break;
    }
    prev = cur;
    cur = cur -> next;
  }
  return head;
}

ListNode* delete(ListNode* head, ListNode* delete, ListNode* deletePrev){
  if(deletePrev == nullptr){
    return head -> next;
  } else {
    deletePrev -> next = delete -> next;
    return head;
  }
}
```

### Insert into a Linked List

#### At the start

```c++
ListNode* insertAtStart(ListNode* head, ListNode* insert){
  insert -> next = head;
  return insert;
}
```

#### At a specific Index

```c++
ListNode* insertAtIndex(ListNode* head, ListNode* insert, int idx){
  if(head -> next == nullptr || idx == 0){
    insert -> next = head;
    return insert;
  } else{
    insertAtIndex(head->next, insert, idx-1);
    return head;
  } 
}
```
` 
