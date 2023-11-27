# Write a program to accept a 4 digit number and
# a. Display face value of each decimal digit
# b. Display place value of each decimal digit
# c. Display no in reverse order by changing decimal place values If user enters 
#    4 digit number 9361 output should be
# a. 9 3 6 1
# b. 9361 = 9000 + 300 + 60 + 9
# c. 1639

num = int(input("Enter four digit number : "))
num1 = num
num2 = num1

a = num / 1000 
num = num % 1000
b = num / 100
num = num % 100
c = num / 10
num = num % 10
d = num
print(f"Face value = {int (a)} {int (b)} {int (c)} {int (d)}")

e = num1 // 1000 
num1 = num1 % 1000
f = num1 // 100
num1 = num1 % 100
g = num1 // 10
num1 = num1 % 10
h = num1
print(f"Place value : {(e*1000)+(f*100)+(g*10)+h} = {e*1000} + {f*100} + {g*10} + {h}")

rev = 0
while num2 != 0:
    rem = num2 % 10
    rev = rev * 10 + rem
    num2 = num2 // 10
print(f"Reversed Number = {rev}")
