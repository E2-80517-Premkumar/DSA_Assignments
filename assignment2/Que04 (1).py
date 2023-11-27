# Write a function find_longest_word() that takes a list of words and returns 
# the length of the longest one

def find_longest_word():
    list = []
    for i in range(0,3):
        list.append(input("Enter three word : "))
    print(list)
    length = len(list)
    i=0
    while i < length-1:
        if len(list[i]) > len(list[i+1]):
            temp=list[i]
            list[i]=list[i+1]
            list[i+1]=temp
        i=i+1
    print(f"largest = {list[length-1]}")
    return len(list[length-1])

long = find_longest_word()
print(f"longest length = {long}")
