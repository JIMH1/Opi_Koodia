""" Python 118
==========

merkkijono = "testi"
print(f"{merkkijono:5} pälä pälä {merkkijono:5}")

liukuluku = 12345.12345
print(f"{liukuluku:.2f} pälä pälä {liukuluku}")

merkkijono = "saippuakauppias"
print(merkkijono[0:10:2])

merkkijono = "testi"
print(merkkijono[::-1])

lista = [1,2,3,4,5,6,7,8,9,10]
print(lista[5:2:-1])

merkkijono = "saippuakauppias"
merkkijono.count("a")

uusimerkkijono = merkkijono.replace("a","A") """

# Tehtävä 118-1: Tee merkkijonoja listassa, esitä elementit väärinpäin ja kukin merkkijono väärinpäin
lista = ["Tupu","Hupu","Lupu"]
for elementti in lista[::-1]:
    print(elementti[::-1])

# Tehtävä 118-2: Ilmoita mitä kirjainta on eniten merkkijonossa...
merkkijono = "saippuakauppias"
for kirjain in "abcdefghijklmnopqrstuvwxyzåäö":
    count = merkkijono.count(kirjain)
    if count > 0:
        print(f"{kirjain} = {count}")        

# Tehtävä 118-3: Poista merkkijonosta kaikki vokaalit
merkkijono = "saippuakauppias"
for kirjain in "aeiouyåäö":
    merkkijono = merkkijono.replace(kirjain,"")
print(merkkijono)

# Tehtävä 118-4: Ilmoita numerolistan elementtien läheinen arvo (etäisyys 1)
lista = [4,7,3,2,6,4,6,8,9,3]
laskuri = 0
while laskuri < len(lista):
    if laskuri == 0:
        if abs(lista[laskuri] - lista[laskuri+1]) <= 1:
            print(f"indeksillä {laskuri} arvo on {lista[laskuri]}")
    elif laskuri == len(lista) - 1:
        if abs(lista[laskuri] - lista[laskuri-1]) <= 1:
            print(f"indeksillä {laskuri} arvo on {lista[laskuri]}")
    else:
        if abs(lista[laskuri] - lista[laskuri-1]) <= 1 or abs(lista[laskuri] - lista[laskuri+1]) <= 1:
            print(f"indeksillä {laskuri} arvo on {lista[laskuri]}")
    laskuri += 1
