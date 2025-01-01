import random
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

print("Welcome to the PyPassword Generator!")
nr_letters= int(input("How many letters would you like in your password?\n")) 
nr_symbols = int(input(f"How many symbols would you like?\n"))
nr_numbers = int(input(f"How many numbers would you like?\n"))
#Easy Method
password = ""#create an empty string 
for i in range(1, nr_letters+1):
    password += random.choice(letters)

for i in range(1, nr_symbols+1):
    password += random.choice(numbers)

for i in range(1, nr_numbers+1):
    password += random.choice(symbols)
print(password)

#Hard Method:- Creates a list to change the order of no., symbols, letters.
password_list=[]#create an empty list
for j in range(1, nr_letters+1):
    password_list += random.choice(letters)

for j in range(1, nr_symbols+1):
    password_list += random.choice(numbers)

for j in range(1, nr_numbers+1):
    password_list += random.choice(symbols)
    
random.shuffle(password_list)#changes the orignal list so no need to create a new variable

hard_pasword=""#to convert the password from list to string format
for k in password_list:
    hard_pasword += k
print(hard_pasword)  

'''Sample Output-
Welcome to the PyPassword Generator!
How many letters would you like in your password?
4
How many symbols would you like?
4
How many numbers would you like?
3
*$w*6k3lv65'''