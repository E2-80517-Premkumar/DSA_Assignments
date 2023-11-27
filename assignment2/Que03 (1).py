# Find and display the largest number of a list without using built-in function 
# max(). Your program should ask the user to input values in list from keyboard

l1 = []

for i in range(3):
    l1.append(int(input("Enter three numbers : ")))

print(l1)

largest = l1[0]
for i in l1:
    if i > largest:
        largest = i

print(f"Largest number = {largest}")


    
