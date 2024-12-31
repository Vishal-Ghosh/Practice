student_heights = input().split() #since the input always stores in string format
for n in range(0, len(student_heights)):#converting strings to inputs
    student_heights[n] = int(student_heights[n])
total = 0
no_of_students=0
for i in student_heights:
    total += i
    no_of_students +=1
print("The avergae height is:", round(total/no_of_students))#round off to the nearest whole number
 
 
 
'''sample input-156 178 165 171 187
          Output-The avergae height is: 171'''   