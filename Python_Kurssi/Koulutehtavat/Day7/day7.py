#sqlite päivä

import sqlite3

connection = sqlite3.connect("testdatabase.db")
print("Add records")
connection.execute("""
DROP TABLE IF EXISTS Accounts;
""")
connection.execute("""
CREATE TABLE Accounts
(ID INT PRIMARY KEY NOT NULL,
NAME TEXT NOT NULL,
SALDO REAL,
CREDIT REAL,
INFO TEXT
);
""")
 
connection.execute("""
INSERT INTO Accounts (ID, NAME, SALDO, CREDIT, INFO)
VALUES (1, 'Aku', 313.00, 0.00, '');
""")
 
connection.execute("""
INSERT INTO Accounts (ID, NAME, SALDO, CREDIT, INFO)
VALUES (2, "Iines", 123.45, 1200.00, "friend of Aku");
""")
 
sql = "INSERT INTO Accounts (ID, NAME, SALDO, CREDIT, INFO) VALUES (?,?,?,?,?);"
saldo = 111.11
parameters = (3, "Testi", saldo, 0.0, "Timo Testaaja")
connection.execute(sql,parameters)
 
connection.commit()

connection.close()

cursor = connection.cursor()
cursor.execute("SELECT * FROM Accounts")
rows = cursor.fetchall()

for row in rows:
    print("koe")
    print("ID = ", row[0]) # id
    print("NAME = ", row[1]) # id
    print("SALDO = ", row[2]) # id
    print("CREDIT = ", row[3]) # id
    print("INFO = ", row[4]) # id
    print("\n")

connection.close()

print("Read all records END")

connection = sqlite3.connect("testdatabase.db")
print("Read one records")

cur = connection.cursor()
cur.execute("SELECT * FROM Accounts WHERE name=?", ('Aku',))
data = cur.fetchall()

for record in data:
    print("koe")
    print("ID = ", record[0]) # id
    print("NAME = ", record[1]) # id
    print("SALDO = ", record[2]) # id
    print("CREDIT = ", record[3]) # id
    print("INFO = ", record[4]) # id
    print("\n")

connection.close()

print("Read one records END")

connection = sqlite3.connect("testdatabase.db")
print("change one records")

connection.execute(
    """
    UPDATE Accounts 
    SET credit=? 
    WHERE name=? 
    """,
    (12345.56,'Aku',)
)

connection.commit()

connection.close()

print("change one records END")

connection = sqlite3.connect("testdatabase.db")
print("delete one records")

connection.execute(
    """
    DELETE FROM Accounts 
    WHERE name=? 
    """,
    ('Aku',)
)

connection.commit()

connection.close()