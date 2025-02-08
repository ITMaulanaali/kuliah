let object = { nama: "Lana", umur: 30, kota: "Indonesia" };

for (let key in object) {
    console.log(key + ": " + object[key]);
}

/**
 * Ini digunakan untuk mengambil semua properti di object berdasarkan key valuenya.
 * key akan berisi nama properti yang berurut setiap loop dan object[key] akan berisi nilai dari properti yang diambil sesuai dengan type datanya
 */