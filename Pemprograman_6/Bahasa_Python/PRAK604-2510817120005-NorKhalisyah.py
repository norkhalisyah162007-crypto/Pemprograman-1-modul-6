kode = input("Masukkan kode Shikamaru: ").strip()
pesan = input("Masukkan pesan yang diterima: ").strip()

if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
    exit()

hasil = []
jumlah_bintang = 0
jumlah_pagar = 0

for i in range(len(kode)):
    if kode[i] == pesan[i]:
        hasil.append('*')
        jumlah_bintang += 1
    else:
        hasil.append('#')
        jumlah_pagar += 1

print(''.join(hasil))
print(f"* = {jumlah_bintang}")
print(f"# = {jumlah_pagar}")

if jumlah_bintang >= jumlah_pagar:
    print("Pesan Asli")
else:
    print("Pesan Palsu")
