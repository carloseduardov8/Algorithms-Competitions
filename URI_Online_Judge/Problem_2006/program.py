#Input for number of tea:
n=input()

#Input for guesses:
ent=map(int,raw_input().split(" "))

#Prints count of number of tea in guesses:
print ent.count(n)
