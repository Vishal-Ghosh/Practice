target = int(input())
value = 0
for i in range(1,target+1): # or we can use for i in range(1,target+1,2)--This we remove the need of if part
    if i%2 == 0:
        value += i
print(value)

''' Sample input - 10
           Output - 30'''