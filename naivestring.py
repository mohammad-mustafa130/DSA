def naive_string_matcher (str, ptr):
	n = len(str)
	m = len(ptr)
	for i in range (n - m + 1):
		if ptr[0] == str[i]:
			j = 1
			while j < m and ptr[j] == str[i + j]:
				j = j + 1
			if j == m:
				return i
	return -1

str = "Today is convocation for year 2025 batch in Integral University."
pattern = "ocation"

result = naive_string_matcher (str, pattern)

if result >= 0:
	print (f"{ pattern } found at { result }")
else:
	print ("Pattern not found")
