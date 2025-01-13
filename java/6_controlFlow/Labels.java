
class Labels {

    public static void main(String[] args) {

        labelForPalingLuar:
        for(int i=1; i<=5; i++){
            for(int k=1; k<=5; k++){
                System.out.print(k);

                if(k==2){
                    continue labelForPalingLuar;
                }
            }
            System.out.println(i);
        }
    }
}

/*
 * labels DIgunakan untuk memberi label pada looping. Yang digunakan untuk continue dan break.
 */