""" Python 105
==========

Tavoitteet:
-Ymmärtää if-lauseita

if ika > 17:
    print("Tässä ajokortti!")
else:
	print("Polkupyörä on keksitty!") """

# Tehtävä 105-1: Tee ohjelma, joka kysyy vuoden ja sanoo syntymävuotesi, jos kyseessä on vuosi jolloin synnyit.
vuosi = int(input("Mikä vuosi? "))
syntymavuosi = 1984
if vuosi == syntymavuosi:
    print("Tämä on syntymävuoteni!")

# Tehtävä 105-2: Tee ohjelma, joka antaa luvun itseisarvon. Sen on katsottava onko luku pienmpi kuin 0 ja tällöin kertoo luvun -1:llä.
luku = int(input("Anna luku? "))
if luku >= 0:
    print(f"{luku} on positiivinen ja sen itseisarvo on {luku}")
else:
    print(f"{luku} on negatiivinen ja sen itseisarvo on {-luku}")

# Tehtävä 105-3: Tee ohjelma, joka kysyy nimen ja lukumäärän. Nimen ollessa Aapeli, ohjelma sanoo että tässä ilmainen ruoka. Muuten ohjelma sanoo, että annokset maksavat lukumäärä kertaa 5,90 euroa.
nimi = input("Anna nimi? ")
lukumaara = int(input("Anna lukumaara? "))

if nimi == "Aapeli":
    print("Tässä on ilmainen ruoka!")
else:
    print(f"{nimi}! Annokset maksavat {lukumaara} kertaa 5,90 euroa eli {lukumaara*5.90} euroa.")

# Tehtävä 105-3: Ohjelmalle syötetään luku. Se ilmoittaa että luku on pienempi kuin 10/100/1000/10000
luku = int(input("Anna luku? "))
if luku < 10:
    print(f"{luku} on pienempi kuin 10")
if luku < 100:
    print(f"{luku} on pienempi kuin 100")
if luku < 1000:
    print(f"{luku} on pienempi kuin 1000")
if luku < 10000:
    print(f"{luku} on pienempi kuin 10000")
# Tehtävä 105-4: Ohjelmalle syötetään kaksi lukua ja laskentatapa (plus, miinus, kerto, jako). 
# Ohjelma laskee laskentatavan mukaisen tuloksen ja tulostaa sen.
lukuA = int(input("Anna luku A? "))
lukuB = int(input("Anna luku B? "))
laskentatapa = input("Anna laskentatapa? ")

if laskentatapa == "plus":
    print(f"{lukuA} + {lukuB} = {lukuA+lukuB}")
if laskentatapa == "miinus":
    print(f"{lukuA} - {lukuB} = {lukuA-lukuB}")
if laskentatapa == "kerto":
    print(f"{lukuA} * {lukuB} = {lukuA*lukuB}")
if laskentatapa == "jako":
    print(f"{lukuA} / {lukuB} = {lukuA/lukuB}")

# Tehtävä 105-5: Tee ohjelma, jolle syötetään luku Celsiusasteina. Ohjelma ilmoittaa arvon Fahrenheitteina. Etsi kaava netistä.
celsius = float(input("Anna lämpötila Celsius-asteina? "))
print(f"{celsius} astetta Celsiusta on { (celsius*1.8) + 32 } astetta Fahrenheit.")