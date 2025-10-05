from random import  randint 

def Description():
    print("Game Description: Amadice\n")
    print("Amadice is a two-dice gambling game for four or more players, where players bet on the outcome of a dice roll. The game is managed by a Knoxman (the host), who owns the dice and sets the game's official entry fee. Players take turns as the point shooter, betting against others and trying to land on a specific number to win the pot. The game is a combination of luck and strategy, with opportunities for side bets that add to the excitement.\n\n")
    print("These are the official Game Rules:\n")
    print("1. Game Setup & Player Roles\n Knoxman: The game's host and owner of the dice.\n The Knoxman sets a Default Bet Value that all players must abide by. The Knoxman does not participate in betting because he is just a computer.\n Point Shooter: The player currently rolling the dice.\n This person is randomly chosen at the start of the game and can change if they lose and decide not to continue and in order not to continue the player needs to withdraw money.\n Opposing Player: The player to bet against the Point Shooter. This person is also randomly chosen and is a mandatory participant in the bet.\n Other Players: The remaining players who can choose to join the main bet or place side bets with each other.\n")
    print("2. Placing Bets\n Main Bet: The Point Shooter places a bet equal to or greater than the Default Bet Value given by Knoxman. The Opposing Player must place a matching bet.\n The remaining players can also place a matching bet to join the main pot. The Point Shooter has the final say on whether to accept these additional bets.\n Side Bets: Side bets are only permitted after a Mail Number has been established (see Rule #4).\n")
    print("3. The First Roll (Come Out Roll)\n The Point Shooter rolls both dice.\n Immediate Win: If the sum of the dice is 7 or 11, the player wins and takes the entire pot. The game round ends and a new round starts.\n Immediate Loss: If the sum is 2, 3, or 12, the player loses. The money in the pot is divided among the opposing players. The game round ends. The player currently rolling the dice loses their turn and money, and a new Point Shooter is randomly selecte, see (Rule #5).\n Set a Mail Number: If the sum is 4, 5, 6, 8, 9, or 10, this number becomes the Mail Number. The game proceeds to the next phase.\n")
    print("4. Rolling for the Mail Number\n If a Mail Number is established, the player currently rolling continues to roll the dice.\n Win: If the player currently rolls their Mail Number again, they win the game. They take the entire pot. The round ends and a new one starts.\n Lose: If the player currently rolling rolls a 7 before hitting their Mail Number, they lose the game. The pot is divided among the opposing players. The round ends and a new one begins.\n Side Bets: At this point, the remaining players who are not in the main bet can place side bets with each other. For example, one player might bet that the current player that is rolling will roll their Mail Number and win, while another bets that the player will roll a 7 and lose. These bets are handled separately from the main pot and must be at least at the Default Bet Value.\n")
    print("5. Payouts and Continuing the Game\n Point Shooter Wins: The current player rolling collects all the money from the main pot.\n Point Shooter Loses: The current player rolling is responsible for paying out the opposing players. Each opposing player gets a payout equal to double their initial bet (their original bet plus an equal profit from the current player rolling funds). The current player rolling must use their own money to cover this if the pot is not sufficient.\n Continuing: After a round, if the current player rolling wins, they can start a new round and may choose to increase the bet amount. If the current player rolling loses, they can either pay their losses and say pay to signal their intent to continue, placing a new bet, or they can pass the dice to a new, randomly chosen Point Shooter.\n Knoxman's Fee: Any player who wins three consecutive rounds must pay a fee to the Knoxman equal to the Default Bet Value.\n\n")
class PlayerRegistration:
    def __init__(self):
        self.players = []
        
    def register(self, name):
        self.players.append(name)

def player_name():
    player = PlayerRegistration()
    p = 1
    try:
        while True:
            number = int(input("How many players are joining: "))
            if number >= 4:
                while True:
                    for i in range(number):
                        name = input("Each player should enter their names: ")
                        player.register(name)
                    return False
            elif number < 4:
                print("\nSorry there should be a minimum of 4 players on board\n")
            for name in player.players():
                print(f"player {p}: {name}")
                p += 1
            return False
    except ValueError:
        print("\nInvalid! input, please type a valid number\n")
    except Exception as e:
        print(f"\nSomething unexepected occurred: error: {e}\n")
        
        
if __name__=="__main__":
    print('*' * 10, "welcome to Amadice Simulator", '*' * 10, end='\n\n')
    print("Please read through the game Description, for you only get to see it only at the beginning of the game\n\n")
    Description()
    player_name()
    