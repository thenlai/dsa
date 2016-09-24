class Queue {
	constructor() {
		this.list = [];
	}

	front() {
		return this.list[0];
	}

	back() {
		return this.list[this.list.length];
	}

	push(item) {
		this.list.push(item);
	}

	pop() {
		this.list.pop();
	}
}