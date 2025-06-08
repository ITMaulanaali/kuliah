#mengambil informasi versi dari docker engine
docker version

#melihat kumpulan image yang sudah dibuat atau download
docker image ls

#mendownload image dengan versi paling baru dari docker hub ke registry
docker image pull ubuntu:latest

#menghapus image ubuntu yang tag nya latest
docker image rm ubuntu:latest

#melihat semua container yang ada
docker container ls -a
#melihat semua container yang sedang berjalan
docker container ls

#membuat container baru dengan nama latihan
docker container create --name latihan ubuntu:latest

#mengstop container agar berhenti berjalan
docker container stop namaContainer/id

#menghapus container
docker container rm namaContainer/id
