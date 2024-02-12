""" Python 106
==========

Tavoite:

len komento

sana = "Aku Ankka"
print(len(sana))

tietotyyppien väliset muunnokset
muuttuja = str(1234)
muuttuja = int(5.15)
muuttuja = int("123")
muuttuja = float("123.45") """

# Tehtävä 106-1: Tee ohjelma, jossa kirjoitetaan merkkijono ja ilmoitetaan sen pituus.
merkkijono = "Ankkalinna"
print(f"{merkkijono} merkkijonon pituus on {len(merkkijono)}.")
# Tehtävä 106-2: Tee ohjelma, jossa kirjoitetaan liukuluku ja ohjelma ilmoittaa sen pyöristyksen kokonaisluvuksi.
liukuluku = 5678.89
print(f"{liukuluku} liukuluvun pyöristys on {int(liukuluku)} ja oikeasti {round(liukuluku)}.")
# Tehtävä 106-3: Tee ohjelma, jolle syötetään luku Celsiusasteina. Ohjelma ilmoittaa arvon Fahrenheitteina. Etsi kaava netistä.
celsius = float(input("Anna lämpötila Celsius-asteina? "))
print(f"{celsius} astetta Celsiusta on { (celsius*1.8) + 32 } astetta Fahrenheit.")