""" Python 108
==========

and, or ja not

if luku >= 2 and luku <= 4:
    print("Luku on välillä 2 ja 4") """
	


# Tehtävä 108-1: Tee ohjelma, joka kysyy luvun ja sanoo että alle 10 on pieni ja että negatiivinen luku on negatiivinen. Muuten luku on suuri.
luku = int(input("Anna luku?"))
if luku < 10:
    print("luku on pieni.")
    if luku < 0:
        print("luku on negatiivinen.")
else:
    print("Luku on suuri.")
# Tehtävä 108-2: Tee ohjelma, joka ilmoittaa onko syötetty nimi joku Aku Ankan veljenpojista.
nimi = input("Anna nimi? ")
if nimi == "Tupu" or nimi == "Hupu" or nimi == "Lupu":
    print(f"{nimi} on veljenpoika.")
else:
    print(f"{nimi} ei ole veljenpoika.")
# Tehtävä 108-3: Tee ohjelma, joka ilmoittaa onko syötetty kokonaisluku jaollinen viidellä.
luku = int(input("Anna luku? "))

if luku % 5 == 0:
    print(f"{luku} on jaollinen viidellä.")
# Tehtävä 108-4: Tee ohjelma, joka laskee onko kyseessä karkausvuosi.
vuosi = int(input("Anna vuosi? "))
if vuosi % 4 == 0 and vuosi % 100 != 0 and vuosi % 400 == 0:
    print(f"{vuosi} on karkausvuosi")
else:
    print(f"{vuosi} ei ole karkausvuosi")