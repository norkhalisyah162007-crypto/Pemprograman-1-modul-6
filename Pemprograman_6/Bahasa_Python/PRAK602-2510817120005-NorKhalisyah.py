n = int(input("Masukkan jumlah ruangan: "))

zetsu = list(map(int, input("Masukkan jumlah zetsu di setiap ruangan: ").split()))

hasil = []
for i in range(n):
    hasil.append(zetsu[i] * (i + 1))

print("Hasil setelah membelah diri:")
for h in hasil:
    print(h, end=" ")
