import numpy as np
import sklearn.metrics as sm

actual = np.array(['Dog', 'Dog', 'Dog', 'Not Dog', 'Dog', 'Not Dog', 'Dog', 'Dog', 'Not Dog', 'Not Dog'])
predicted = np.array(['Dog', 'Not Dog', 'Dog', 'Not Dog', 'Dog', 'Dog', 'Dog', 'Dog', 'Not Dog', 'Not Dog'])

matrix = sm.confusion_matrix(actual, predicted)
print("Confusion Matrix:")
print(matrix)



"""True Positive:5 
False Positive:1 
True Negative:2 
False Negative 2 """