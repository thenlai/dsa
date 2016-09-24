# 队列

队列，是满足先进先出（FIFO）的线性表。

队列所需要实现的接口：
```cpp
class Queue<T> {
	// access
	T front();
	T back();

	// capacity
	bool empty();
	size_t size();

	// modifier
	void push(T item);
	void pop();
}
```