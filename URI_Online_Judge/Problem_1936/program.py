from math import *

#Reads number from input:
n = input()

#Square root of n:
sq = ceil(n**0.5)

#Sum in progress (never bigger than n):
cont = 0

#Answer (number of portions):
ans = 0

#Loops until the sum in progress reaches n:
while cont!=n:
    #Tries to find a number whose factorial is smaller than n-(sum in progress):
	for i in range(int(sq),0,-1):
		if factorial(i) <= n-cont:
			cont+=factorial(i)
			ans+=1
			sq=i
			break
			
print ans
