# Task OOP-06:
# Change your bank so it includes code set above (polymorphism). It must have CreditAccount class. Add code that shows all bank accounts and credit accounts

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


# Task OOP-07:
# Change your bank so it includes code set above add at least following functionality to bank: Raise or Lower Credit amount for a customer /  Destroy account /  Transfer money from one account to another /  Change Bank account to credit account
# Change credit account to bank account add information field to account (text content). Allow writing or removing text to information field  for instance, "credit risk"


class BankAccount:
    def __init__(self, name, saldo, id, info_text = ""):
        self.name = name
        self.saldo = saldo
        self.id = id
        self.info_text = info_text
 
    def accountinfo(self):
        print(self.name, self.saldo, self.id, self.info_text)
    
    def changebalance(self, amount, choice):
        if choice == "w":
            self.saldo -= amount
        elif choice == "a":
            self.saldo += amount


class CreditAccount(BankAccount):
    def __init__(self, name, saldo, id, credit, info_text = ""):
        super().__init__(name, saldo, id, info_text)
        self.credit = credit
    
    def setcredit(self, amount, choice):
        if choice == "r":
            self.credit += amount
        elif choice == "l":
            self.credit -= amount

    def accountinfo(self):
        print(self.name, self.saldo, self.id, self.credit, self.info_text)

account_1 = BankAccount("Aku", 313.00, 123456)
accountlist = []
accountlist.append(account_1)

account_2 = CreditAccount("Iines", 111.44, 1111111, 12000.00)
accountlist.append(account_2)
for element in accountlist:
    element.accountinfo()

def addaccount():
    temp_name = input("Give accounts name: ")
    temp_saldo = float(input("Give accounts saldo: "))
    temp_id = int(input("Give accounts id: "))
    temp_account = BankAccount(temp_name, temp_saldo, temp_id)
    accountlist.append(temp_account)

def delaccount():
    name_search = input("Give accounts name to delete:\n")
    for element in accountlist:
        if element.name == name_search:
            accountlist.remove(element)
            break

def changeaccount():
    name_search = input("Give accounts name that is to be changed:\n")

    for element in accountlist:
        if element.name == name_search:
            if hasattr(element, "credit"):
                temp_account = BankAccount(element.name, element.saldo, element.id)
            else:
                temp_account = CreditAccount(element.name, element.saldo, element.id, 0.00)
            accountlist.remove(element)
            accountlist.append(temp_account)
            print(temp_account)
            break

def showoneaccount():
    name_search = input("Give the name of the account you want to find:\n")
    for elementti in accountlist:
        if elementti.name == name_search:
            elementti.accountinfo()
            break

def addinfotext():
    choice = input("Add info (a). Delete info (d):\n")
    name_search = input("Give accounts name to add information into:\n")
    for element in accountlist:
        if element.name == name_search and choice == "a":
            info_text = str(input("Give information for the account:\n"))
            element.info_text = info_text
            print(element.info_text)
            break
        elif element.name == name_search and choice == "d":
            element.info_text = ""
            print(element.info_text)
            break

def cashactions():
    name_search = input("Give the name of the account you want to find:\n")
    for elementti in accountlist:
        if elementti.name == name_search:
            elementti.accountinfo()
            temp_action = input("Give action w or a\n") 
            temp_change = float(input("Give change of saldo\n"))
            elementti.changebalance(temp_change,temp_action)
            break 

def creditactions():
    name_search = input("Give the name of the account you want to find:\n")
    for element in accountlist:
        if element.name == name_search:
            element.accountinfo()
            temp_action = input("Raise (r) or lower (l) the credit:\n")
            temp_change = float(input("Give the amount to raise/lower:\n"))
            element.setcredit(temp_change, temp_action) 
            break

def transfer():
    sender = input("Who is sending money:\n")
    recipient = input("Who is receiving the money:\n")
    amount = 0
    for element in accountlist:
        if element.name == sender:
            element.accountinfo()
            amount = float(input("Give the amount to send:\n"))
            element.changebalance(amount, "w")
            break
    for element in accountlist:
        if element.name == recipient:
            element.changebalance(amount, "a")
            break

def showallaccounts():
    for elementti in accountlist:
        elementti.accountinfo()


while True:
    customer_input = int(input("\n1: Add account\n2: Delete account\n3: Change account\n4: Show account info for one account\n5: Show account info for all accounts\n6: Add information unto an account\n7: Cash actions to account\n8: Credit actions to account\n9: Transfer money\n0: Quit banking program\n"))

    if customer_input == 1:
        addaccount()
    elif customer_input == 2:
        delaccount()
    elif customer_input == 3:
        changeaccount()
    elif customer_input == 4:
        showoneaccount()
    elif customer_input == 5:
        showallaccounts()
    elif customer_input == 6:
        addinfotext()
    elif customer_input == 7:
        cashactions()
    elif customer_input == 8:
        creditactions()
    elif customer_input == 9:
        transfer()
    elif customer_input == 0:
        break 