# Write a program to accept three integer numbers and find its average

num1 = int(input("Enter number1 : "))
num2 = int(input("Enter number2 : "))
num3 = int(input("Enter number3 : "))

sum = 0
sum = num1 + num2 + num3

print(f"Average of {num1}, {num2} and {num3} = {sum // 3}")
