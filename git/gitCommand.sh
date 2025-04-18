#cek konfigurasi apa saja yang telah dikonfigurasi di git
git config --list

#melakukan konfigurasi minimal ke git lokal untuk bisa remote ke github ke semua repository dari git lokal(global) yaitu username dan email
git config --global user.name "maulana"
git config --global user.email email@gmail.com

#cek sedang berada di branch mana
git branch

#melakukan remote ke github dengan ssh
git remote add beriNamaRemotenya git@github.com:username/repository.git

#memasukan hasil edit file ke staged
git add namaFile

#melakukan cek file yang ada di staged dan di modified(belum di git add)
git status

#mengcommit semua file di staged ke git lokal
git commit -m "pesan perubahan"

#mencommit atau push atau clonning commit di git lokal ke git remote(github)
git push origin main keBranchApaDiGitHub

#mengcek apakah ada update terbaru di repository
git fetch

#mengambil update terbaru di repository
git pull

#mengembalikan dan menghapus perubahan/modified dari commit sebelumnya
git revert

#mengclone repository
git clone git@github.com:username/namarepo

#membuat branch baru
git branch newBranch

#berpindah ke branch baru
git switch newBranch

#mengdelete branch yang belum di merge secara lokal karena sudah di pull request merge ke github
git branch -D newBranch

#mendelet branch yang sudah di merge secara lokal di git
git branch -d newBranch

#membatalkan dan mengembalikan file ke working directory dari commit yang tidak sengaja sebelumnya
git reset --soft HEAD~1

#menambahkan konfigurasi file konfigurasi file .ini ke git local jika berpindah branch
[includeIf "onbranch:master"]
  path = /lokasi/filenya

#menyimpan hasil coding di suatu branch untuk di lanjutkan lagi(alias dari git commit/stash) sehingga tidak tercommit
git stash

#melihat daftar stash yang ada
git stash list

#mengambil stash sebelumnya
git stash pop

#mengupdate data branch yang terbaru di github ke git local
git pull --prune
