n = int(input())
a = list(map(int, input().split()))
q = int(input())
qa = list(map(int, input().split()))

for i in qa:
	tmp = a[:i]
	print(min(tmp), max(tmp))