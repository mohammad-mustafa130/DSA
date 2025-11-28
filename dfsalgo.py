from creategraph import Graph

class GraphAlgos:
	def __init__(self):
		pass
	def depth_first_search(self, graph, vertex):
		traversed = []
		stack = []
		stack.append(vertex)
		while len(stack) != 0:
			v = stack.pop()
			if v not in traversed:
				traversed.append(v)
			for element in graph[v]:
				if element not in traversed and element not in stack:
					stack.append(element) 
		for ve in traversed:
			print (ve, end = ' ')
		print ()
obj = Graph(5)
graph = obj.create_graph()
print("Graph:", graph)

obj2 = GraphAlgos()
print ("DFS Traversal order:")
obj2.depth_first_search(graph, 1)
