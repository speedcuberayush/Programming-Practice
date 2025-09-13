from abc import ABC,abstractmethod 
import time 
class Car(ABC):
    @abstractmethod
    def gas(self,speed:int):
        pass

    def brake(self):
        pass 
    

class Hyundai(Car):
    
    def __init__(self):
        self.speed=0
        
    def gas(self,speed):
        print("Gas Pressed in Hyundai")
        for i in range(speed,speed+50):
            self.speed=i
            print(i)
            time.sleep(0.01)
            
    def brake(self):
        print(f"Stopping the car from {self.speed}")

class Suzuki(Car):
    def __init__(self):
        self.speed=0
        
    def gas(self,speed):
        print("Gas Pressed in Suzuki")
        for i in range(speed,speed+30):
            self.speed=i
            print(i)
            time.sleep(0.01)
            
    def brake(self):
        print(f"Stopping the car from {self.speed}")
        

creta=Hyundai()
swift=Suzuki()

creta.gas(50)
swift.gas(40)

swift.brake()
creta.brake()
        
        
