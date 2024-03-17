print(int()) 
print(int("222"))
print(int("QQWERTY"))
print(int("X"))
print(int("11F"))

mynumber = int(input("\nGive a temperature number  "))
if mynumber <= 10:
    print("\nIt is cool outside")
elif mynumber > 10 and mynumber <= 15:
    #elif = else if 
    print("\nIt is warm outside")
else:
    print("\nIt is hot outside")

numberlist = [4,7,3,1,8]
resultlist = []

for kukkaruukku in numberlist:
    dummy = kukkaruukku * 2
    resultlist.append(kukkaruukku)

print(kukkaruukku)

print("for result is ",resultlist)

# each/filter/map/reduce
 
lista = [ 11,22,33,44,55,66,77,88]
result = []
 
# each
"""
for index in range(0,len(lista)):
    print(lista[index])
 
for element in lista:
    print(element)
"""
 
"""
# filter
def filtteri(arvo, element):
    if element > arvo:
        return element
   
for element in lista:
    dummy = filtteri(44, element)
    if dummy:
        result.append(dummy)
   
print(result)
"""
 
"""
# map
def mappi(arvo, element):
    return element * arvo
   
for element in lista:
    result.append(mappi(3,element))
   
print(result)
"""
 
#reduce
summa = 0
 
for element in lista:
    summa += element
   
print(summa)

# case 1: use function
def myswitchfunction(value):
    match value:
        case 1:
            return 11
        case 2:
            return 22
        case 3:
            pass
        # _ means everything else
        # equal to default
        case _:
            return 0

print(myswitchfunction(111)) # 0
print(myswitchfunction(1)) # 11
print(myswitchfunction(2)) # 22
print(myswitchfunction(3)) # ei mitään eli None



class Point:
    x: int
    y: int

def mypointevaluation(point):
    match point:
        case Point(x=1, y=2):
            print("1 and 2")
        case _:
            print("Something else?")

mypoint = Point()
mypoint.x = 1
mypoint.y = 1
mypointevaluation(mypoint)

mypoint.x = 1
mypoint.y = 2
mypointevaluation(mypoint)

