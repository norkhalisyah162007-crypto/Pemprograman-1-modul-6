n1, n2 = map(int, input("Masukkan n1 dan n2: ").split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    baris1 = list(map(int, input("Masukkan angka baris pertama: ").split()))
    baris2 = list(map(int, input("Masukkan angka baris kedua: ").split()))

    print("Hasil:", end=" ")
    for i in range(n1):
        print(baris1[i] * baris2[i], end=" ")