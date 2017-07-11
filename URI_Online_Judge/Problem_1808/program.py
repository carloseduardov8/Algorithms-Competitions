#Input:
ent = input()
#Sum of all grades:
sum1 = 0
#Number of grades:
cont = 0
#Auxiliary boolean. True means 'perform iteration', false skips an iteration:
ok = True

#Iterates through each number:
for i in range(len(ent)):
	
	#If current number is a 0 formed by a 10, skip:
	if (ok == False):
		ok = True
		continue

    #Increments number of grades:
	cont += 1
	
	#If number is not 1, simply add it:
	if ent[i] != '1':
		sum1 += int(ent[i])
	elif len(ent) > i+1:
	    #If next number is 0, then current 1 is actually 10:
		if ent[i+1] == '0':
			sum1 += 10
			#Flag to skip next iteration:
			ok = False
		else:
			sum1 += 1
	else:
		sum1 += 1
		
#Calculates mean and prints answer:
answer = sum1*1.0/cont
print( "%.2f" % answer) 
