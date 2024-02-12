mytupleA = ()
print("my empty tuple is ",mytupleA)

mytupleB = (4,7,32,5,5,121,56)
print(mytupleB.count(111)) # 0
print(mytupleB.count(5)) # 2
# first occurrence index
print(mytupleB.index(5)) # 3

mytupleC = (4, "Hello", 9.123)
print("my tuple is ",mytupleC)

indeksi = 0
for counter in range(0,mytupleB.count(5)):
    indeksi = mytupleB.index(5,indeksi,len(mytupleB))
    print(indeksi)
    indeksi += 1

for indeksi,arvo in enumerate(mytupleB):
    if arvo == 5:
        print(indeksi)

