import random

num = random.randint(0, 100)
print("Selamat datang ke game tebak angka")
print("Silakan pilih angka 0 - 100")

batasKecil = 0
batasBesar = 100

while True:
    jawab = int(input(f">>> ({batasKecil} sampai {batasBesar}): "))

    if jawab < batasKecil or jawab > batasBesar:
        print(f"Masukkan angka antara {batasKecil} sampai {batasBesar}")
        continue

    if jawab > num:
        print(f"Kebesaran, pilih antara {batasKecil} sampai {jawab - 1}")
        batasBesar = jawab - 1

    elif jawab < num:
        print(f"Terlalu kecil, pilih antara {jawab + 1} sampai {batasBesar}")
        batasKecil = jawab + 1

    else:
        print("Selamat, jawaban Anda benar!")
        break
        
##ah enak bgt daripada C awikwok, back python sebentar lalu lanjut C 
##kemarin C sintaks nya awikwok nama function juga agak susah hafal, ini latihan logika lagi disini 
##aight thats all
