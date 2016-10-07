#include <iostream>
#include <queue>

int main(void) {
	std::priority_queue<int> q;
	q.push(3);
	q.push(4);
	q.push(1);
	std::cout << q.top() << std::endl; //4


	// 如果是指针，则按内存中的地址编号大小来比较优先级
	std::priority_queue<int*> q2;
	int a = 3;
	q2.push(&a);
	int b = 4;
	q2.push(&b);
	int c = 1;
	q2.push(&c);
	//std::cout << *(q2.top()) << std::endl; // 3

	while(!q2.empty()) {
		int *i = q2.top();
		q2.pop();
		std::cout << i << " = " << *i << std::endl;
	}

	return 0;
}