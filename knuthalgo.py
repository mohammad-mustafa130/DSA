def computePrefixFunction (P, m):
	pi = []
	for i in range (m):
		pi.append(0)
	k = 0
	for q in range (1, m):
		while k > 0 and P[k] != P[q]:
			k = pi[k - 1]
		if P[k] == P[q]:
			k = k + 1
		pi[q] = k
	return pi

def kmpMatcher(T, P, n, m):
	pi = computePrefixFunction(P, m)
	q = 0
	for i in range(n):
		while q > 0 and P[q] != T[i]:
			q = pi[q - 1]
		if P[q] == T[i]:
			q = q + 1 
		if q == m:
			return i - m + 1
			q = pi[q - 1]
	return -1

text = "abdbacababaca"
print("Text:",  text)

pattern = "ababaca"
print("Pattern:", pattern)

result = kmpMatcher(text, pattern, len(text), len(pattern))
if result >= 0:
	print (f"{ pattern } found at {result}")
else:
	print ("Pattern not found")

 
