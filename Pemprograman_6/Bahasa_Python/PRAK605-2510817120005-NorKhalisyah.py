n = int(input("Masukkan ordo matriks: "))

print("Matriks A")
A = []
for _ in range(n):
    A.append(list(map(int, input().split())))

print("Matriks B")
B = []
for _ in range(n):
    B.append(list(map(int, input().split())))

C = []
for i in range(n):
    row = []
    for j in range(n):
        total = 0
        for k in range(n):
            total += A[i][k] * B[k][j]
        row.append(total)
    C.append(row)

print("Matriks AXB")
for row in C:
    print(*row)