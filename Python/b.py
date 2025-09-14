# import json

# class FlashMemory:
#     def __init__(self):
#         self.memorySize = 2  # TB
#         self.readSpeed = 4800
#         self.writeSpeed = 3200

#     def read(self, LBA, tXL):
#         print(f"Reading from {LBA} to {tXL}")

#     def write(self, LBA, data="Hi My name is Ayush"):
#         print(f"Writing at {LBA} with data length {len(data)}")


# class NANDFlash(FlashMemory):
#     def __init__(self):
#         super().__init__()
#         self.TechStack = "BiCS8"

#     def NandPerformance(self, speed=(3500, 3400), memorysize=2):
#         self.readSpeed, self.writeSpeed = speed
#         self.memorySize = memorysize


# class NORFlash(FlashMemory):
#     def __init__(self):
#         super().__init__()
#         self.TechStack = "NOR_BiC8"

#     def NORPerformance(self, speed=(5000, 5000), memorysize=2):
#         self.readSpeed, self.writeSpeed = speed
#         self.memorySize = memorysize


# class CustomFlash(NANDFlash, NORFlash):
#     def __init__(self):
#         super().__init__()
#         self.Product = "AYUSH_FLASH"
#         self.NAND_size = 0
#         self.NOR_size = 0

#     def Performance(self, memorysize):
#         self.NAND_size = memorysize * 0.9
#         self.NOR_size = memorysize * 0.1

#         # Apply performance separately
#         self.NandPerformance(memorysize=self.NAND_size)
#         self.NORPerformance(memorysize=self.NOR_size)

#     def printDetails(self):
#         for i,j in self.__dict__.items():
#             print(f"{i} -> {j}")
            
            
# sdk=CustomFlash()
# sdk.Performance(8)
# sdk.printDetails()

import re
mainString="one common misconception we hear is that you should wait an hour afer eating before going swimming as it is usnafe to do otherwise. However, there has been no science to prove this "
mactchingstring="one"

print(re.match(mactchingstring,mainString))