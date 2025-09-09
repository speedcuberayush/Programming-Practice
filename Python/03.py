arr = [[1, 2, 3],
       [4, 5, 6],
       [7, 8, 9]]

# print original
for row in arr:
    print(*row)

n = len(arr)
for i in range(n):
    for j in range(i + 1, n):   # only upper triangle
        arr[i][j], arr[j][i] = arr[j][i], arr[i][j]

print("\nTranspose:\n")
for row in arr:
    print(*row)
