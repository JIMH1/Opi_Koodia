#olio-ohjelmointia

def ulkoinenfunktio():
    print("ulkoinenfunktio")
 
class Testi:
    def __init__(self,aaa=111,bbb=222,ccc=333):
        self.aaa = aaa
        self.bbb = bbb
        self.ccc = ccc
        ulkoinenfunktio()
        self.kutsujotain()
 
    def kutsujotain(self):
        print("kutsujotain")
 
testi = Testi(ccc=999)
print(testi.aaa,testi.bbb,testi.ccc)