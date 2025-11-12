class Graph:
	def __init__(self, n):
		self.graph = [0] * (n + 1)

	def create_graph(self):
		i = 1
		while i < len(self.graph):
			no_of_vertex = int(input(f"Number of vertices at {i}th vertex: "))
			temp = []
			j = 0
			while j < no_of_vertex:
				vertex_no = int(input(f"Vertex Number: "))
				temp.append(vertex_no)
				j = j + 1
			self.graph[i] = temp
			i = i + 1
		return self.graph

obj = Graph(5)
graph = obj.create_graph()
print (graph)
