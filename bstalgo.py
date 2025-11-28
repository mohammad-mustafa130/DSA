class BST:
	def __init__(self):
		self.root = None

	class Node:
		def __init__(self, data):
			self.left = None
			self.data = data
			self.right = None

	def create_tree(self, no_of_nodes):
		for i in range(no_of_nodes):
			data = int(input('Enter node data: '))
			if i == 0:
				self.root = self.Node(data)
			else:
				temp = self.root
				p = self.root
				while temp != None:
					p = temp
					if data < temp.data:
						temp = temp.left
					else:
						temp = temp.right
				if data > p.data:
					p.right = self.Node(data)
				else:
					p.left = self.Node(data)
		return self.root

	def level_order_traversal(self, root):
		traversed = []
		queue = [root]
		while len(queue) != 0:
			u = queue.pop(0)
			traversed.append(u.data)
			if u.left != None:
				queue.append(u.left)
			if u.right != None:
				queue.append(u.right)
		return traversed

	def pre_order_traversal(self, root):
		traversed = []
		stack = [root]
		while len(stack) != 0:
			u = stack.pop()
			traversed.append(u.data)
			if u.right != None:
				stack.append(u.right)
			if u.left != None:
				stack.append(u.left)
		return traversed

	#def in_order_traversal(self, root):
	#	traversed = []
	#	stack = [root]
	#	current = root
	#	while stack or current:
	#		while current != None:
	#			stack.append(current)
	#			current = current.left
	#		current = stack.pop()
	#		traversed.append(current.data)
	#		current = current.right
	#	return traversed
	def in_ordertraversal(self, root):
		traversed = []
		stack = [root]
		while len(stack) != 0:
			u = stack.pop()
			if u.right != None:
				stack.append(u.right)
			if u.right == None:
				traversed.append(u.data)
			if u.left != None:
				stack.append(u.left)
		return traversed

	def post_order_traversal(self, root):
		traversed = []
		stack1 = [root]
		stack2 = []
		while len(stack1) != 0:	
			u = stack1.pop()
			stack2.append(u)
			if u.left != None:	
				stack1.append(u.left)
			if u.right != None:
				stack1.append(u.right)
		while len(stack2) != 0:
			traversed.append(stack2.pop().data)
		return traversed

bst = BST()
root = bst.create_tree(7)

a = bst.level_order_traversal(root)
print ("Level Order Traversal: ", a)

b = bst.pre_order_traversal(root)
print ("Pre-Order Traversal:", b)

c = bst.in_ordertraversal(root)
print ("In-Order Traversal:", c) 

d = bst.post_order_traversal(root)
print ("Post-Order Traversal:", d)
