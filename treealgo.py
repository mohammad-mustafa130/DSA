class Node:
	def __init__(self, data):
		self.left = None
		self.data = data
		self.right = None

root = Node(50)
root.left = Node(40)
root.right = Node(70)
root.left.left = Node(30)
root.left.right = Node(45)
root.right.left = Node(60)
root.right.right = Node(80)
