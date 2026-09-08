import random
x=random.randint(1,50)
y=0
while x!=y:
    y=int(input("take a guess: "))
    if x>y:
        print("Greater")
    elif x<y: 
        print("Smaller") 
    else:
        print("you have guessed the number successfylly it is : ",x)