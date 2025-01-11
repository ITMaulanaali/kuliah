#include <string>
using namespace std;

class Mahasiswa{
    private:
        string nama;
        string jurusan;
        int nim;

    public:
        Mahasiswa(string, string, int);
        ~Mahasiswa();
        void outData();
};