""" Python 123
==========


with open("testi.txt") as tiedosto:
    teksti = tiedosto.read()
    print(teksti)
	
lista =[]
with open("testi.txt") as tiedosto:
    for rivi in tiedosto:
		lista.append(rivi)
		print(rivi)

lista =[]
with open("testi.txt") as tiedosto:
    for rivi in tiedosto:
		sanalista = rivi.split(";")
		lista.append(sanalista)
		for sana in sanalista:
			print(sana)
	
# \n pääsee eroon .strip() lauseella voit kokeilla myös .replace lausetta """

# Tehtävä 123-1: Tee tiedosto, jossa on monta riviä numeroita. Lue se ja tulosta numerot.
lista = []
with open("numero.txt") as tiedosto:
    for rivi in tiedosto:
        lista.append(int(rivi))
        print(rivi)
print(lista)
# Tehtävä 123-2: Tee .csv tiedosto, jossa on monta riviä ";" erotettuja sanoja. Lue se ja luo lista sanoista.

# katso vastaus alla

# Tehtävä 123-3: Tee .csv tiedosto, jossa on monta riviä ";" erotettuja sanoja sekä välilyöntejä. Lue se ja luo lista sanoista. Poista rivinvaihdot ja turhat välilyönnit.
lista =[]
with open("teksti.csv") as tiedosto:
    for rivi in tiedosto:
        sanalista = rivi.split(";")
        dummy = []
        for sana in sanalista:
            dummy.append(sana.strip())
        lista.append(dummy)
print(lista)	
# Tehtävä 123-4: Yhdistä kahden .csv tiedoston sisällöt ja tee niistä listan arvoja.
lista =[]
with open("testi.csv") as tiedosto:
    for rivi in tiedosto:
        sanalista = rivi.split(";")
        dummy = []
        for sana in sanalista:
            dummy.append(sana.strip())
        lista.append(dummy)

with open("teksti.csv") as tiedosto:
    for rivi in tiedosto:
        sanalista = rivi.split(";")
        dummy = []
        for sana in sanalista:
            dummy.append(sana.strip())
        lista.append(dummy)

print(lista)	