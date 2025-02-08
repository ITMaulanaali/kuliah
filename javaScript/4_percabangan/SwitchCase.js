let inputUser = prompt("Masukan start urutan dari 5-9");

switch(parseInt(inputUser)){
    case 5:
        console.log("berurut dari 5");
    case 6:
        console.log("berurut dari 6");
    case 7:
        console.log("berurut dari 7");
    case 8:
        console.log("berurut dari 8");
    case 9:
        console.log("berurut dari 9");
        break;
    default:
        console.log("anda tidak mengurutkan sesuai range yang ada");
}


/*
Pada switch case kita tidak bisa memasukan eskpresi dengan object. salah satunya object string
*/