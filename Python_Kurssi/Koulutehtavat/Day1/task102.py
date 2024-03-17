""" 
PYTHON 102
==========

Tavoitteet:
-Osaa tehdä ohjelman, joka lukee käyttäjän tekemän tekstin ja tulostaa sen näytölle
-Ymmärtää mitä muuttujat ovat
-Osaa yhdistää erilaisia merkkijonoja ja muuttujia

Syöttö tapahtuu input komennolla

tulos = input("Kirjoita jotain")
print("Kirjoitit tekstin " + tulos)

Muuttujan nimi voi olla periaatteessa mitä tahansa. Käytännössä sen pitää olla kuvaava.
input komento voi käyttää samaa muuttujaa ja näin käyttää yhtä muuttujaa usean kerran.
Muuttujaa voi käyttää monta kertaa ohjelmassa ja sille voi antaa uuden arvon.
Muuttuja ja olemassa oleva merkiijonon yhdistäminen voidaan tehdä monta kertaa.
 """
# Tehtävä 102-1: Kirjoita ohjelma, joka kysyy oman nimesi ja tulostaa sen.
nimi = input("Anna nimesi? ")
print(nimi)
# Tehtävä 102-2: Kirjoita ohjelma, joka kysyy oman nimesi kerran ja tulostaa sen kahdesti.
nimi = input("Anna nimesi? ")
print(nimi)
print(nimi)
# Tehtävä 102-3: Kirjoita ohjelma, joka kysyy kaksi kertaa nimen ja tulostaa sitten annetun nimen.
etunimi = input("Anna etunimesi? ")
print(etunimi)
sukunimi = input("Anna sukunimesi? ")
print(sukunimi)
# Tehtävä 102-4: Kirjoita ohjelma, joka kysyy nimen ja tulostaa jonkin erikoismerkin ja nimen ja toisen erikoismerkin.
# Esimerkiksi: !Aapeli@
nimi = input("Anna nimesi? ")
print("!" + nimi + "@")
""" Ohjelmassa voi olla monta muuttujaa ja tulostuksessa voidaan käyttää useita muuttujia. """

# Tehtävä 102-5: Kirjoita ohjelma, joka kysyy etunimen ja sukunimen ja kirjoittaa "nimesi on <etunimi> sukunimi>."
etunimi = input("Anna etunimesi? ")
sukunimi = input("Anna sukunimesi? ")
print("Nimesi on "+ etunimi + " " + sukunimi+".")
# Tehtävä 102-6: Kirjoita ohjelma, joka kysyy nimesi ja osoitteesi ja tulostaa sen kuten osoite kirjoitetaan kirjeessä
nimi = input("Anna nimesi? ")
osoite = input("Anna osoitteesi? ")
print(nimi)
print(osoite)

# BONUS
# =====

# Tehtävä 102-7: Kirjoita ohjelma, joka kysyy 2-3 asiaa ja tulostaa lyhyen muutaman rivin tarinan, jossa näitä asioita on käytetty.
sankari = input("Kuka on tarinan sankari? ")
roisto = input("Kuka on tarinan roisto? ")
print(roisto + " ratsasti baariin. " + sankari + " ratsasti myös baariin.\n" + sankari + " pidätti roiston.")
