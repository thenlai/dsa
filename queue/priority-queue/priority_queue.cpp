#include <iostream>
#include <queue>

int main(void) {
	std::priority_queue<int> q;
	q.push(3);
	q.push(4);
	q.push(1);
	std::cout << q.top() << std::endl; //4

	return 0;
}