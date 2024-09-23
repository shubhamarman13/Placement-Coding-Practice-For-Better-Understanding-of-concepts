""" roted array"""

arr = [1, 2, 3, 4, 5]
k = 2  # Rotate by 2 positions
rotated_arr = arr[k:] + arr[:k]
print("Rotated array:", rotated_arr)
