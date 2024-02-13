class Person:
    def __init__(self, name, last_name, age):
        self.name = name
        self.last_name = last_name
        self.age = age
 
class Student(Person):
    def __init__(self, indexNr, notes, **kwargs):
        # since Employee comes after Student in the mro, pass its arguments using super
        super().__init__(**kwargs)
        self.indexNr = indexNr
        self.notes = notes
 
class Employee(Person):
    def __init__(self, salary, position, **kwargs):
        super().__init__(**kwargs)
        self.salary = salary
        self.position = position
 
class WorkingStudent(Student, Employee):
    def __init__(self, **kwargs):
        # pass all arguments along the mro
        super().__init__(**kwargs)
 
# keyword arguments (not positional arguments like the case above)
ws = WorkingStudent(name="john", last_name="brown", age=18, indexNr=1, notes=[1,2,3], salary=1000, position='Programmer')
print(ws.salary)