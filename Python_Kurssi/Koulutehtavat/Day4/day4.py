import csv

# Lets read CSV file

with open("testi.csv") as mycsvfile:
    inputstream = csv.reader(mycsvfile,delimiter=";")
    title = True
    for row in inputstream:
        if title:
            print(row)
            title = False
        else:
            print("{} tyäskentellöö {}".format(row[0], row[2]))

