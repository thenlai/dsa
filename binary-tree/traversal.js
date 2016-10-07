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
console.log('\nmid order:')
midorder(tree);


// # preorder
function preorder(tree) {
	if(tree === null) return;

	console.log(tree.value);
	preorder(tree.left);
	preorder(tree.right);
}
console.log('pre order:')
preorder(tree);


// # postorder
function postorder(tree) {
	if(tree === null) return;

	postorder(tree.left);
	postorder(tree.right);
	console.log(tree.value);
}
console.log('\npost order:')
postorder(tree);
