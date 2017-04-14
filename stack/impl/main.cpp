#include "linked_stack.h"
#include <iostream>

int main(void)
{
  char temp;
  LinkedStack<int> stack = LinkedStack<int>();
  for(int i = 0; i < 100000; i++) {
    stack.push(i);
  }

  // stack.traverse();
  for (int j = 0; j < 99980; j++) {
    stack.pop();
  }
  stack.traverse();

  stack.clear();
  std::cin >> temp;
  stack.pop();
  stack.traverse();
  stack.push(7);
  stack.traverse();

  return 0;
}