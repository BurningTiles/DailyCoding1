def firstRepeatingChar(s):
	tmp = []
	for ch in s:
		if ch in tmp:
			return ch
		else:
			tmp.append(ch)
	return -1

t = int(input())
for _ in range(t):
	print(firstRepeatingChar(input()))