
#1
#  Import NumPy
# import numpy as np
# sudoku_list=[[0, 0, 4, 3, 0, 0, 2, 0, 9],
#  [0, 0, 5, 0, 0, 9, 0, 0, 1],
#  [0, 7, 0, 0, 6, 0, 0, 4, 3],
#  [0, 0, 6, 0, 0, 2, 0, 8, 7],
#  [1, 9, 0, 0, 0, 7, 4, 0, 0],
#  [0, 5, 0, 0, 8, 3, 0, 0, 0],
#  [6, 0, 0, 0, 0, 0, 1, 0, 5],
#  [0, 0, 3, 5, 0, 8, 6, 9, 0],
#  [0, 4, 2, 9, 1, 0, 3, 0, 0]]
# # Convert sudoku_list into an array
# sudoku_array = np.array(sudoku_list)

# # Print the type of sudoku_array 
# print(type(sudoku_array))
#2
# Create an array of zeros which has four columns and two rows
# import numpy as np
# zero_array = np.zeros((5,3))
# print(zero_array)
#3
# Create an array of integers from one to ten
import numpy as np
import matplotlib as plt
one_to_ten = np.arange(1,11)
doubling_array = [1, 2, 4, 8, 16, 32, 64, 128, 256, 512]
# Create your scatterplot

# print(one_to_ten)
plt.scatter(one_to_ten,doubling_array )
plt.show()
