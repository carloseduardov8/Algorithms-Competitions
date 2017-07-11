#Number of nets:
n = input()

#The idea of this program is to divide the input in squares of 1x1 and fill a boolean matrix as
#we iterate over the input. At the end, we count how many 1's we've got.

#Matrix with all 0's:
m = []
for i in range(100):
	line = []
	for j in range(100):
		line += [0]
	m += [line]

#Iterates over the input, setting the matrix:
for i in range(n):
	rede = map(int,raw_input().split(" "))
	for j in range(rede[0],rede[1]):
		for k in range(rede[2],rede[3]):
			m[j][k] = 1
			
#Counts number of 1's:
cont = 0
for i in m:
	cont += sum(i)
	
print cont
