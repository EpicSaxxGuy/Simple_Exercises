num = int(input('Enter the number: ')) 
primeCheck = 0 
for x in range (1, num-1): 
    a = num%x 
    if a == 0 and x != 1: #this checks if the number is prime or not. if it's not prime update the check and get out of the loop 
        primeCheck = 1 
        break
if primeCheck == 0 and num != 1:
    print('The number '+str(num)+' is a prime num') 
else: 
    print('The number '+str(num)+' is not a prime num')