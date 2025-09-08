class Ayush:
    def __init__(self):
        self.__name="Speedcuber"
        self.height=6
        

a= Ayush()
print(a.height)
# print(a._Ayush__name)
print(getattr(a,"_Ayush__name"))
