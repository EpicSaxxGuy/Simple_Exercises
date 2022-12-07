#This program finds if an integer is a factorion or not
num = int(input("Enter your number: ")) 
digit = 0 
summ = 0  
temp = num
while temp > 0: 
    factorial = 1  
    digit = temp % 10 
    temp = int(temp/10)
    #count = 1 
    #while count <= digit: 
    for count in range(1, digit+1, 1):
        factorial *= count 
        #count += 1
    summ += factorial 
if summ == num: 
    print("This number is equal to the sum of its digits factorials") 
else: 
    print("It's not equal")