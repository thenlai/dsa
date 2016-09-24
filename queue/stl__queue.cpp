#include <iostream>
#include <queue>
#include <string>

int main(void) {
	std::queue<char> q;
	q.push('h');
	q.push('e');
	q.push('l');
	q.push('l');
	q.push('o');
	q.push(',');
	q.push('w');
	q.push('o');
	q.push('r');
	q.push('l');
	q.push('d');

	size_t count = 0;
	while(!q.empty()) {
		std::cout << q.front() << std::endl;
		q.pop();
		count++;
	}
	std::cout << "\n" << count << " elements in the queue." << std::endl;
	return 0;
}