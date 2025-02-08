let arraySatuDimensi = [10,"halo",false];

console.log("index[0] adalah: " + arraySatuDimensi[0]);
console.log("index[0] adalah: " + arraySatuDimensi[1]);
console.log("index[0] adalah: " + arraySatuDimensi[2]);

let arrayDuaDimensi = [[10, 20],true];
arrayDuaDimensi[0].push(7);

console.log("index baris[0]kolom[0] adalah: " + arrayDuaDimensi[0][0]);
console.log("index baris[0]kolom[0] adalah: " + arrayDuaDimensi[0][1]);
console.log("index baris[0]kolom[0] adalah: " + arrayDuaDimensi[0][2]);
console.log("index baris[0]kolom[0] adalah: " + arrayDuaDimensi[0][1]);


/**
 * Ada perbedaan yang cukup berbeda pada array di javascript tiap indexnya bisa memiliki tipe data yang berbeda
 * Sehingga pembacaannya akan berbeda antara bahasa javascript, java dan c++
 */