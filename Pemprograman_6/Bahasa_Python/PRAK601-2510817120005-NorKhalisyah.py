baris, kolom= map(int, input("Masukkan jumlah baris dan kolom: ").split())
data = list(map(int, input("Masukkan angka-angkanya: ").split()))

print("Hasil: ")
index = 0
for i in range(baris):
    for j in range(kolom):
        print(data[index], end=" ")
        index += 1
    print()