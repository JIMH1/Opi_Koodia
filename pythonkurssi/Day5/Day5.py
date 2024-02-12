# olio-ohjelmointia tähän
 
#instance variable <--- olion tasoinen ominaisuus
# --> color
# class variable <--- luokan tasoinen ominaisuus
# --> model
 
class Car:
    model = "Audi"
    def __init__(self,color):
        self.color = color
 
mycarA = Car("White")
mycarB = Car("Black")
mycarB.color = "Yellow"
 
# muutetaan luokan tasoista tietoa
# muuttuu jokaiselle luokan oliolle
Car.model = "Lada"
 
# muuttamalla luokan tasoinen tieto oliolle
# muuttaa sen ainoastaan oliolle
mycarB.model = "Mersu"
 
print(mycarA.model, mycarA.color)
print(mycarB.model, mycarB.color)