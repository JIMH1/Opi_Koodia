class Car:
#    def __init__(self):
#        self.color = "green"
 
    def __init__(self,color = "white"):
        self.color = color
        self.model = "Audi"
 
    def onoff(self,status):
        # boolean value if engine is on or off
        if status == True:
            print("\nEngine is on!")
        else:
            print("\nEngine is off!")
 
    def describecar(self):
        print("I am a {} {}.".format(self.color,self.model))
 
mycar = Car()
print(mycar)
print(mycar.color)
mycar.onoff(True)
mycar.describecar()
 
mycar2 = Car("black")
mycar2.color = "blue"
print(mycar2)
print(mycar.color)
print(mycar2.color)