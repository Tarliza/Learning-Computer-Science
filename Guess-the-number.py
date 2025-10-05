import random

POINTS = 100
NUMBERS = []
def welcome():
    print()
    print('*' * 10, "welcome to Guess The Number", '*' * 10, end='\n\n')
    print("press 1 to start the game")
    print("Instructions:\n")
    print("The user has to guess a number between a given range of positive numbers.\n")
    print("If guessed correctly they will move to the next level, each level difficulty increases as the game continues.\n")
    print("This game consists of 6 levels\n")
    print("The user will be given a starting point of 100 points as a start up, each time you guess the number wrong you lose -5pts, and when you guess the number correctly you earn 15pts\n")
    print("If you so which to exist the game, type in 0 at the end of that level then enter\n")
    print("If you want to see your current points type in 2 then enter\n")
    print("press 0 to exist now\n\n")
    
def user_interaction():
    try :
        choice = input("please type in what you would like to do: ")
        return choice
    except TypeError:
        print("\nInvalid choice!\n\n")
    except Exception as e:
        print(f"\nsomething unexpected occurred : {e}\n\n")
        
def level_1():
    global POINTS
    global NUMBERS
    randnumber = random.randint(1, 50)
    NUMBERS.append(randnumber)
    print()
    print('*' * 10, "welcome to Level 1 of this game", '*' * 10, end='\n\n')
    
    while True:
        try:
            choice = int(input("Guess a number in the range of y€[1;50] "))
            if choice == randnumber:
                print(f"\nBull's eye! Congradulations! you have guessed it correctly, the correct number is {randnumber}\n\n")
                POINTS += 15
                print(f"\nYou have scored an extra 15 pts, total of {POINTS} points\n\n")
                return False
            elif choice != randnumber:
                if choice < randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! you missed it right there, {choice} is smaller, try something bigger\n\n")
                elif choice > randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! That is not correct, {choice} is bigger, try something smaller\n\n")
        except ValueError:
            print("\nplease type in a valid number!\n\n")
        except Exception as e:
            print(f"\nError : something unexpected occurred : {e}\n\n")
            
def level_2():
    global POINTS
    randnumber = random.randint(50, 100)
    NUMBERS.append(randnumber)
    print()
    print('*' * 10, "welcome to Level 2 of this game", '*' * 10, end='\n\n')
    
    while True:
        try:
            choice = int(input("Guess a number in the range y€[50;100]: "))
            if choice == randnumber:
                print(f"\nBull's eye! Congradulations! you have guessed it correctly, the correct number is {randnumber}\n\n")
                POINTS += 15
                print(f"\nYou have scored an extra 15 pts, total of {POINTS} points\n\n")
                return False
            elif choice != randnumber:
                if choice < randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! you missed it right there, {choice} is smaller, try something bigger\n\n")
                elif choice > randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! That is not correct, {choice} is bigger, try something smaller\n\n")
        except ValueError:
            print("\nplease type in a valid number!\n\n")
        except Exception as e:
            print(f"\nError : something unexpected occurred : {e}\n\n")  
            
def level_3():
    global POINTS
    randnumber = random.randint(100, 200)
    NUMBERS.append(randnumber)
    print()
    print('*' * 10, "welcome to Level 3 of this game", '*' * 10, end='\n\n')
    
    while True:
        try:
            choice = int(input("Guess a number in the range y€[100;200]: "))
            if choice == randnumber:
                print(f"\nBull's eye! Congradulations! you have guessed it correctly, the correct number is {randnumber}\n\n")
                POINTS += 15
                print(f"\nYou have scored an extra 15 pts, total of {POINTS} points\n\n")
                return False
            elif choice != randnumber:
                if choice < randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! you missed it right there, {choice} is smaller, try something bigger\n\n")
                elif choice > randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! That is not correct, {choice} is bigger, try something smaller\n\n")
        except ValueError:
            print("\nplease type in a valid number!\n\n")
        except Exception as e:
            print(f"\nError : something unexpected occurred : {e}\n\n")  
            
def level_4():
    global POINTS
    randnumber = random.randint(200, 300)
    NUMBERS.append(randnumber)
    print()
    print('*' * 10, "welcome to Level 4 of this game", '*' * 10, end='\n\n')
    
    while True:
        try:
            choice = int(input("Guess a number in the range y€[200;300]: "))
            if choice == randnumber:
                print(f"\nBull's eye! Congradulations! you have guessed it correctly, the correct number is {randnumber}\n\n")
                POINTS += 15
                print(f"\nYou have scored an extra 15 pts, total of {POINTS} points\n\n")
                return False
            elif choice != randnumber:
                if choice < randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! you missed it right there, {choice} is smaller, try something bigger\n\n")
                elif choice > randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! That is not correct, {choice} is bigger, try something smaller\n\n")
        except ValueError:
            print("\nplease type in a valid number!\n\n")
        except Exception as e:
            print(f"\nError : something unexpected occurred : {e}\n\n")   
            
def level_5():
    global POINTS
    randnumber = random.randint(300, 400)
    NUMBERS.append(randnumber)
    print()
    print('*' * 10, "welcome to Level 5 of this game", '*' * 10, end='\n\n')
    
    while True:
        try:
            choice = int(input("Guess a number in the range y€[300;400]: "))
            if choice == randnumber:
                print(f"\nBull's eye! Congradulations! you have guessed it correctly, the correct number is {randnumber}\n\n")
                POINTS += 15
                print(f"\nYou have scored an extra 15 pts, total of {POINTS} points\n\n")
                return False
            elif choice != randnumber:
                if choice < randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! you missed it right there, {choice} is smaller, try something bigger\n\n")
                elif choice > randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! That is not correct, {choice} is bigger, try something smaller\n\n")
        except ValueError:
            print("\nplease type in a valid number!\n\n")
        except Exception as e:
            print(f"\nError : something unexpected occurred : {e}\n\n")   
                
def level_6():
    global POINTS
    randnumber = random.randint(400, 500)
    NUMBERS.append(randnumber)
    print()
    print('*' * 10, "welcome to the last Level of this game level 6", '*' * 10, end='\n\n')
    
    while True:
        try:
            choice = int(input("Guess a number in the range y€[400;500]: "))
            if choice == randnumber:
                print(f"\nBull's eye! Congradulations! you have guessed it correctly, the correct number is {randnumber}\n\n")
                POINTS += 15
                print(f"\nYou have scored an extra 15 pts, total of {POINTS} points\n\n")
                return False
            elif choice != randnumber:
                if choice < randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! you missed it right there, {choice} is smaller, try something bigger\n\n")
                elif choice > randnumber:
                    print("-5pts")
                    POINTS -= 5
                    print(f"\nops! That is not correct, {choice} is bigger, try something smaller\n\n")
        except ValueError:
            print("\nplease type in a valid number!\n\n")
        except Exception as e:
            print(f"\nError : something unexpected occurred : {e}\n\n")   
            
if __name__=="__main__":
    welcome()
    user_input = user_interaction()
    
    if user_input == "1":
        print("\nThe game is starting.......................................................100%\n")
        print(f"These are your starting points {POINTS}\n\n")
        level_1()
        print("press > then enter to go the next level\n\n")
        print("press 0 then enter to exit the game\n\n")
        user_input = user_interaction()
        if user_input == '>':
            print()
            level_2()
            print("press > then enter to go the next level\n\n")
            print("press 0 then enter to exit the game\n\n")
            user_input = user_interaction()
            if user_input == '>':
                print()
                level_3()
                print("press > then enter to go the next level\n\n")
                print("press 0 then enter to exit the game\n\n")
                user_input = user_interaction()
                if user_input == '>':
                    print()
                    level_4()
                    print("press > then enter to go the next level\n\n")
                    print("press 0 then enter to exit the game\n\n")
                    user_input = user_interaction()
                    if user_input == '>':
                        print()
                        level_5()
                        print("press > then enter to go the next level\n\n")
                        print("press 0 then enter to exit the game\n\n")
                        user_input = user_interaction()
                        if user_input == '>':
                            print()
                            level_6()
                            print("press 0 then enter to exit the game\n\n")
                            user_input = user_interaction()
                            if user_input == "0":
                                print("Thank you for your time, Goodbye for now!")
                                print(f"These are your points {POINTS}\n\n")
                        elif user_input == "0":
                            print("Thank you for your time, Goodbye for now!")
                            print(f"These are your points {POINTS}\n\n")
                    elif user_input == "0":
                        print("Thank you for your time, Goodbye for now!")
                        print(f"These are your points {POINTS}\n\n")
                elif user_input == "0":
                    print("Thank you for your time, Goodbye for now!")
                    print(f"These are your points {POINTS}\n\n")
            elif user_input == "0":
                print("Thank you for your time, Goodbye for now!")
                print(f"These are your points {POINTS}\n\n")
        elif user_input == "0":
                print("Thank you for your time, Goodbye for now!")
                print(f"These are your points {POINTS}\n\n")
    elif user_input == "0":
        print("Thank you for your time, Goodbye for now!")
        print(f"These are your points {POINTS}\n\n") 