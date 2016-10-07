# Priority Queue | 优先队列

优先队列，底层也是用堆来实现。在优先队列中，队首元素一定是当前队列中 *优先级最高* 的一个。

优先队列需要实现的接口：
```cpp
class PriorityQueue<T> {
	// access
	T top();

	// capacity
	bool empty();
	size_t size();

	// modifier
	void push(T item);
	void pop();
}
```

与普通队列不同的是，优先队列的接口没有`front`和`back`方法，而是一个`top`接口。

`top`方法返回的是优先级最大的元素。

## 优先级

优先队列元素的优先级，如果是基础类型，就按用比较操作符(>, <)的结果判断大小；
如果是复合类型（如 strut 或 class 等），则需要重载比较操作符。