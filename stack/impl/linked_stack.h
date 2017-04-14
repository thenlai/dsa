/**
 * 通过链表形式实现的stack
 */

#include <iostream>

#ifndef _LINKED_STACK_H
#define _LINKED_STACK_H

template <typename T>
class Node
{
public:
  Node() {}
  Node(T data, Node<T> *next)
  {
    this->data = data;
    this->next = next;
  }

  T data;
  Node<T> *next;
};

template <typename T>
class LinkedStack
{
private:
  size_t count = 0;
  Node<T> *top;
  Node<T> *bottom;

public:
  LinkedStack()
  {
    count = 0;
    bottom = new Node<T>;
    top = bottom;
    top->next = nullptr;
  }

  ~LinkedStack()
  {
    clear();
  }

  T top()
  {
    return top->data;
  }

  bool empty()
  {
    return count == 0;
  }

  size_t size()
  {
    return this.count;
  }

  void traverse()
  {
    std::cout << "iteration: ";
    if (count == 0)
    {
      std::cout << "empty stack" << std::endl;
      return;
    }

    Node<T> *pn = this->top;
    while (pn != this->bottom)
    {
      std::cout << pn->data << " /";
      pn = pn->next;
    }

    std::cout << std::endl;
    return;
  }

  void push(T val)
  {
    top = new Node<T>(val, top);
    count++;
  }

  void pop()
  {
    if (count == 0)
    {
      std::cout << "pop: on <empty>" << std::endl;
      return;
    }

    Node<T> *tmp = this->top;
    this->top = this->top->next;
    delete tmp;
    count--;
  }

  void clear()
  {
    while (this->top != this->bottom)
    {
      Node<T> *tmp = this->top;
      this->top = this->top->next;
      delete tmp;
    }
    count = 0;
  }
};

#endif
