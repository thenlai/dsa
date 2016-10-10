var  Node = function(left, right, value) {
	if(arguments.length<3) {
		throw new TypeError("Not enough params for 'Node'.")
	}
	this.left = left;
	this.right = right;
	this.value = value;
}

Node.prototype.isNode = function(node) {
	if(!node) return false;

	return (node instanceof Node || 
	(node.hasOwnProperty("parent") && 
	node.hasOwnProperty("left") &&
	node.hasOwnProperty("right") &&
	node.hasOwnProperty("value")));
}

Node.prototype.hasLeft = function() {
	return Node.prototype.isNode(this.left);
}

Node.prototype.hasRight = function() {
	return Node.prototype.isNode(this.right);
}

var tree = new Node(
	new Node(
		new Node(
			new Node(
				new Node(
					null,
					new Node(
						null,
						null,
						'lllr'),
					'llll'),
				null,
				'lll'),
			null,
			'll'),
		new Node(
			null,
			new Node(
				null,
				null,
				'lrr'),
			'lr'),
		'l'
	),
	new Node(
		new Node(
			null,
			null,
			'rl'),
		new Node(
			null,
			null,
			'rr'),
		'r'
	),
	'0'
);

// # mid order
function midorder(tree) {
	if(tree === null) return;

	midorder(tree.left);
	console.log(tree.value);
	midorder(tree.right);
}
console.log('\nmid order:');
midorder(tree);


// # preorder
function preorder(tree) {
	if(tree === null) return;

	console.log(tree.value);
	preorder(tree.left);
	preorder(tree.right);
}
console.log('\npre order:');
preorder(tree);


// # postorder
function postorder(tree) {
	if(tree === null) return;

	postorder(tree.left);
	postorder(tree.right);
	console.log(tree.value);
}
console.log('\npost order:');
postorder(tree);

// # level order 广度优先遍历
function levelorder(tree) {
	if(!tree) {
		throw new Error('Empty tree')
	}

	var queue = [];
	queue.push(tree);
	while(queue.length !== 0) {
		node = queue.shift();
		console.log(node.value);
		if(node.hasLeft()) queue.push(node.left);
		if(node.hasRight()) queue.push(node.right);
	}
}
console.log('\nlevel order:')
levelorder(tree);

// # Morris traversal
function morrsPreorder(tree) {
	if(!tree) {
		return;
	}
	var c1 = tree, c2 = null;
	while(c1) {
		c2 = c1.left;
		if(c2) {
			while(c2.right && c2.right !== c1) {
				c2 = c2.right;
			}
			if(!c2.right) {
				c2.right = c1;
				console.log(c1.value);

				c1 = c1.left;
				continue;
			} else {
				c2.right = null;
			}
		} else {
			console.log(c1.value);
		}
		c1 = c1.right;
	}
}
console.log('\nMorris pre order:')
morrsPreorder(tree);

// # Morris Inorder
function morrsInorder(tree) {
	if(!tree) {
		return;
	}
	var c1 = tree, c2 = null;
	while(c1) {
		c2 = c1.left;
		if(c2) {
			while(c2.right && c2.right !== c1) {
				c2 = c2.right;
			}
			if(!c2.right) {
				c2.right = c1;
				c1 = c1.left;
				continue;
			} else {
				c2.right = null;
			}
		}
		console.log(c1.value);
		c1 = c1.right;
	}
}
console.log('\nMorris in-order:')
morrsInorder(tree);

// Morris post order
function morrsPostorder(tree) {
	if(!tree) {
		return;
	}
	var c1 = tree, c2 = null;
	while(c1) {
		c2 = c1.left;
		if(c2) {
			while(c2.right && c2.right !== c1) {
				c2 = c2.right;
			}
			if(!c2.right) {
				c2.right = c1;
				c1 = c1.left;
				continue;
			} else {
				c2.right = null;
				// print edge
				printEdge(c1.left);
			}
		}
		c1 = c1.right;
	}
	printEdge(head);
}
var printEdge = function(head) {
  var tail = reverseEdge(head)
  var cur = tail
  while(cur) {
    console.log(cur.value)
    cur = cur.right
  }
  reverseEdge(tail)
}

var reverseEdge = function(head) {
  var pre = null,
      next = null
  while(head) {
    next = head.right
    head.right = pre
    pre = head
    head = next
  }
  return pre
}

console.log('\nMorris in-order:')
morrsPostorder(tree);