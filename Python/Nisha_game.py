import random
weapons=["STONE","PAPER","SCISSORS"]
i=1
p=0
c=0
print("Nisha's STONE-PAPER-SCISSORS GAME.")
while i<=10:
    print("GAME-",i)
    print("WEAPONS ARE:STONE,PAPER,SCISSORS")
    player=input("PLAYER:-")
    #print(player)
    computer=random.choice(weapons)
    print("COMPUTER:-",computer)
    if player==computer:
        print("It's a Tie")
    elif(player=="STONE"):
        if(computer=="PAPER"):
            print("Computer Wins!")
            c+=1
        else:
            print("Player Wins!")
            p+=1
    elif player=="PAPER":
        if(computer=="STONE"):
            print("Player Wins!")
            p+=1
        else:
            print("Computer Wins!")
            c+=1
    elif player=="SCISSORS":
        if(computer=="STONE"):
            print("Computer Wins!")
            c+=1
        else:
            print("Player Wins!")
            p+=1
        
    print("\nPLAYER SCORE:", p, " \tCOMPUTER SCORE:", c)
    
    ch=input("\nDO YOU WANT TO PLAY AGAIN?\nTYPE:- YES/NO ")
    if ch=="NO":
        break
    else:
        i+=1