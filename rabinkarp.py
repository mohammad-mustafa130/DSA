def rabinKarpAlgo (T, P, d, q):
	n = len(T)
	m = len(P)
	h = pow(d, m-1, q)
	p = 0
	t = 0
	for i in range (m):
		p = (d * p + ord(P[i])) % q
		t = (d * t + ord(T[i])) % q

	for s in range (n - m + 1):
		if p == t: 
			if P[1 : m] == T[s+1 : s+m]:
				return s
		if s < n - m:
			t = (d * (t - ord(T[s]) * h) + ord(T[s + m])) % q
	return -1

text = "Today is convocation for year 2025 batch in Integral University"
pattern = "ocation"

result = rabinKarpAlgo (text, pattern, 256, 101)

if result >= 0:
	print (f"{ pattern } found at { result }")
else:
	print ("Pattern not found")
