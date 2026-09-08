# define a function
# def greet(name) -> None:
#     print(f"Hello {name}")

# greet("kodu")

# use of class
class car:
    def __init__(self,brand:str,color:str,horsepower:int,electric:bool)->None:
        self.color=color
        self.brand=brand
        self.horsepower=horsepower
        self.electric=electric
    def can_drive(self)->None:
        print(f"{self} can drive since 1927")
    def is_electric(self)->str:
        if self.electric==True:
            print(f"{self.brand} don't need oil")
        else:
            print(f"{self.brand} can not drive without oil")    

BMW:car=car("BMW","red",200,False)
print(BMW.horsepower)
BMW.is_electric()


