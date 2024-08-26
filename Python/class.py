class Person:
    
    def __init__(self, name, occupation):
        print("Hey I am a Person")
        self.name = name
        self.occupation = occupation
    networth = 10
    def info(self):
        print(f"{self.name} is a {self.occupation}")


a = Person("Shubham", "Developer")
b = Person("Divya", "HR")

a.info()
b.info()