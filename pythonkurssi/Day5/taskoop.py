# Task OOP-01
# Program your own class and objects
# Person class with name, age
# personstats()
# personsays(arg)
# Create 2 persons

"""
class Person:
    def __init__(self,name,age):
        self.name=name
        self.age=age

    def personstats(self):
        print(self.name)
        print(self.age)

    def personsays(self,say):
        print(say)

person1 = Person("Aku",55)
person2= Person("Hannu", 66)

person1.personstats()
person1.personsays("Terve")

person2.personstats()
person2.personsays("Moro") 
"""

# Task OOP-02
# change previous solution as follows:
# add class variable number
# its value is increased by 1 whenever new
# person is added
# print how many persons you have created
# i.e. how many Person objects you have
"""
class Person:
    number = 0
    def __init__(self,name,age):
        self.name=name
        self.age=age
        Person.number +=1

    def personstats(self):
        print(self.name)
        print(self.age)

    def personsays(self,say):
        print(say)

print(Person.number)
person1 = Person("Aku",55)
print(Person.number)
person2= Person("Hannu", 66)
print(Person.number,"näin monta henkilöä tehty")

person1.personstats()
person1.personsays("Terve")

person2.personstats()
person2.personsays("Moro") 
"""

# Task OOP-03
# create class PersonToo
# without default constructor
# attributes are name and age
# methods are personstats() and personsays(arg)

class PersonToo:
    name=""
    age=1

    def personstats(self):
        print(self.name)
        print(self.age)

    def personsays(self,say):
        print(say)

person1 = PersonToo()
person1.name="Tupu"
person1.age=11
person2= PersonToo()
person2.name="Hupu"
person2.age=11


person1.personstats()
person1.personsays("Terve")

person2.personstats()
person2.personsays("Moro")

# Task OOP-04
# Use class functions and find out following...
# 1) Value of age in both persons.
# 2) Is qwerty a object variable?
# 3) Delete age of one of the persons.

# 1) Value of age in both persons.
print(getattr(person1,"age"))
print(getattr(person2,"age"))

# 2) Is qwerty a object variable?
print(hasattr(person1,"qwery"))

# 3) Delete age of one of the persons.
delattr(person2,"age")
print(hasattr(person2,"age")) 


# Task OOP-005
# afternoon's programming task.
# create a class BankAccount for accounts
# with attributes: 
#   name (string), 
#   saldo (float), 
#   id (int)
# with methods: 
#   changebalance(float) for X amount withdrawal/accumulation
#   accountinfo() that describes account info
# Then add all account objects to a list named accountlist.

# Next create a following bank interface to test out your class and list:
#
# MY BANK
# 1: Add account
# 2: Show account info for one account
# 3: Show account info for all accounts
# 0: Quit banking program

class BankAccount:
    def __init__(self, name, saldo, id):
        self.name = name
        self.saldo = saldo
        self.id = id
 
    def accountinfo(self):
        print(self.name, self.saldo, self.id)

    def changebalance(self, amount, choice):
        if choice == "w":
            self.saldo -= amount
        elif choice == "a":
            self.saldo += amount

account_1 = BankAccount("Aku", 313.00, 123456)
accountlist = []
accountlist.append(account_1)
for elementti in accountlist:
    elementti.accountinfo()

def addaccount():
    temp_name = input("Give accounts name: ")
    temp_saldo = float(input("Give accounts saldo: "))
    temp_id = int(input("Give accounts id: "))
    temp_account = BankAccount(temp_name, temp_saldo, temp_id)
    accountlist.append(temp_account)

def showoneaccount():
    name_search = input("Give the name of the account you want to find:\n")
    for elementti in accountlist:
        if elementti.name == name_search:
            elementti.accountinfo()

def cashactions():
    name_search = input("Give the name of the account you want to find:\n")
    for elementti in accountlist:
        if elementti.name == name_search:
            elementti.accountinfo()
            temp_action = input("Give action w or a\n") 
            temp_change = float(input("Give change of saldo\n"))
            elementti.changebalance(temp_change,temp_action) 

def showallaccounts():
    for elementti in accountlist:
        elementti.accountinfo()

while True:
    customer_input = int(input("\n1: Add account\n2: Show account info for one account\n3: Show account info for all accounts\n4: Cash actions to account\n0: Quit banking program\n"))

    if customer_input == 1:
        addaccount()
    elif customer_input == 2:
        showoneaccount()
    elif customer_input == 3:
        showallaccounts()
    elif customer_input == 4:
        cashactions()
    elif customer_input == 0:
        break
