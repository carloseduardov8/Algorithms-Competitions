#Input for number of games:
n, m=map(int,raw_input().split(" "))

cont = 0

#Iterates through games in input:
for i in range(n):
	matches=map(int,raw_input().split(" "))
	if 0 in matches:
		pass
	else:
		cont+=1
		
print cont
