#This is a project to play rock,paper and scissors


rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''
import random
game_img = [rock, paper, scissors]

#Taking input from the user
user_choice = int(input("Type 0 for rock. 1 for paper & 2 for scissors: "))

#Checking for invalid inputs
if user_choice >=3 or user_choice < 0:
    print('Invalid input!!')
else:
    print(f"You chose {game_img[user_choice]}")    
    computer_choice = random.randint(0, 2)
    print(f"Computer drew {game_img[computer_choice]}")
#Checking for the rules of the game
    if user_choice == computer_choice:
        print("It's a draw!") 
    elif user_choice == 2 and computer_choice == 0:
        print('You loose!')
    elif user_choice == 0 and computer_choice == 2:
        print('You win!')
    elif user_choice > computer_choice:
        print('You win!')
    elif user_choice < computer_choice:
        print('You loose!')
