--Menampilkan Jumlah koneksi atau total koneksi atau banyaknya koneksi yang pernah dibuat atau terkoneksi
SHOW STATUS LIKE 'Connections';

--Menampilkan jumlah koneksi yang terhubung saat ini
SHOW STATUS LIKE 'Threads_connected';

--Menampilkan max koneksi yang dizinkan ke database
SHOW VARIABLES LIKE 'max_connections';

--Menampilkan lebih detail user apa saja yang terkoneksi saat ini
SHOW PROCESSLIST;
