from creategraph import Graph

class GraphAlgos:
	def __init__(self):
		pass
	def breadth_first_search(self, g, s):
		queue = []
		traversed = []
		queue.append(s)
		while len(queue) != 0:
			u = queue.pop(0)
			for x in g[u]:
				if x not in traversed and x not in queue:
					queue.append(x)
			traversed.append(u)
		print("BFS Traversal order:")
		for vertex in traversed:
			print(vertex)

obj = Graph(5)
graph = obj.create_graph()
print ("Graph:", graph)

obj2 = GraphAlgos()
obj2.breadth_first_search(graph, 1)

