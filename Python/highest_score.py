student_scores = input().split()
for n in range(0, len(student_scores)):#converting string to integers
    student_scores[n] = int(student_scores[n])

value = 0
for score in student_scores:
    if score > value:
        value = score
print(f"The highest score is: {value}")

'''Sample Input - 78 65 89 86 55 91 64 89
          Output- The highest score is: 91''' 