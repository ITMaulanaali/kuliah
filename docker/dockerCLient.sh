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

#melihat logs container. Untuk realtime tinggal tambahkan flag -f
docker container logs namaContainer/id

#mengeksekusi atau melakukan prompt ke container secara realtime (menjalankan file sh) atau /bin/bash
docker container exec -it namaContainer/id sh
docker container exec -it namaContainer/id /bin/bash

#menambahkan port forwarding ketika membuat container
docker container create --name latihanweb --publish 8080:80 nginx:latest

#menambahkan environtment variable ketika membuat container
docker container create --name mysqlku --env MYSQL_ROOT_PASSWORD="123" mysql:latest

#menambahkan limit resource ketika membuat container
docker container create --name nginxku --memory 1g --cpus 1 mysql:latest

#mount bind container untuk sinkronisasi data di localhost (tambahkan readonly jika ingin container hanya bisa read data saja)
docker container create --name nginxku --mount "type=bind,source=/pathhost,target=pathcontainer" nginx:latest

#mount volume ke container untuk sinkronisasi data di docker
docker container create --name nginxku --mount "type=volume,source=namavolume,targe=pathcontainer" nginx:latest

#melihat semua recource tiap continer
docker container stats

#melihat kumpulan volume
docker volume ls

#membuat volume
docker volume create namavolume

#menghapus volume
docker volume rm namavolume

#melihat kumpulan network
docker network ls

#membuat network
docker network create --driver namadriver namanetwork

#melihat secara detail dalam format json sesuatu
docker container inspect namacontainer

#menghapus suatu yang tidak digunakan
docker container prune
docker image prune
docker volume prune
docker network prune
#menghapus semua sesuatu secara otomatis yang tidak digunakan
docker system prune
