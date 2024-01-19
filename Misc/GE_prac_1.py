import numpy as np

def dlist(num):
    strd = str(num)
    digits_list = [int(digits) for digits in strd]
    return digits_list

userin = int(input("Enter your number:"))
extDigitList = dlist(userin)
extDigArray = np.array(extDigitList)
print("The number list and array are:", extDigitList, extDigArray)

for i in range(len(extDigArray)):
    print  ('+' * extDigArray[i])
    
print()
