
fun main(){

    var baris: IntRange = 1..5
    var kolom: IntRange = 1..5

    
    labelForPalingLuar@ for(i in baris){
        for(k in kolom){
            print(k)
            if(k==2){
                continue@labelForPalingLuar
            }
        }
        println(i)
    }
}

/*
nilai akan berurutan kesamping dan tidak terenter karena println tidak pernah tereksekusi karen diskip
*/