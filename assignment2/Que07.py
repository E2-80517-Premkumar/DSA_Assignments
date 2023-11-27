# Using for loop, write and run a Python program to find factorial from 0 to 10

num = 0
print("Factorial from 0 to 10 : ")

for num in range(10+1):    
    if num == 0:
        num = num + 1

        print("0! = 1")

    else:
        fact = 1

        for i in range(1, num+1):
            fact = fact * i
        
        print(f"{num}! = {fact}")
        num = num + 1
