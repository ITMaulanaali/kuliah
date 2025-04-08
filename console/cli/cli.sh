#mengizinkan suatu file untuk bisa di execute
chmod+x nama_file

#melihat versi package dan letak filenya
which mysql

#menginstall mingw untuk compilasi machine code windows khususnya c++
apt install mingw-w64

#mendownload,menambahkan repositori terbaru nodejs versi LTS ke system
#kemudian install nodejs(include npm)
curl -sL https://deb.nodesource.com/setup_18.x | sudo -E bash -
apt install nodejs

#mengintal rar untuk esktrak windows
apt install unrar

#menginstall dirsearch untuk cek source file web path
apt install dirsearch

#menginstall ettercap tools MITM

#menginstall ssh service(daemon)
apt install openssh_server

#menginstall broker mosquitto dan mosquitto clients
apt install mosquitto
apt install mosquitto-clients

#menginstall android-studio dan file serta executablenya simpan di direktori /opt/android-studio
sudo wget https://redirector.gvt1.com/edgedl/android/studio/ide-zips/2024.2.1.12/android-studio-2024.2.1.12-linux.tar.gz -P /tmp/
sudo tar -xvzf /opt/android-studio-2024.2.1.12-linux.tar.gz -C /opt/
rm /tmp/android-studio-2024.2.1.12-linux.tar.gz
echo -e "[Desktop Entry]\nVersion=1.0\nName=Android Studio\nComment=Android Studio IDE\nExec=/opt/android-studio/bin/studio.sh %f\nIcon=/opt/android-studio/bin/studio.png\nTerminal=false\nType=Application\nCategories=Development;IDE;\nStartupWMClass=AndroidStudio" | sudo tee /usr/share/applications/android-studio.desktop > /dev/null
sudo chmod +x /usr/share/applications/android-studio.desktop
sudo chmod +x /opt/android-studio/bin/studio.sh
update-desktop-database /usr/share/applications/
echo "Instalasi selesai! Android Studio sudah siap digunakan."

#menginstall driver printer opensource yang dapat support ke beberapa printer epson terkenal seri lama(ip2770)
apt install printer-driver-gutenprint

#menginstall kicad
apt install kicad
