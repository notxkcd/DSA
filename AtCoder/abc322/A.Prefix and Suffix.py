def solve():
	N, T = map(int, input().split())
	
	S1 = input()
	S2 = input()
	
	if (S1 == S2):
		return 0
	elif (S2[:N] == S1):
		return 1
	elif (S2[-N:] == S1):
		return 2
	else:
		return 3
	

print(solve())