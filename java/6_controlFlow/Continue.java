
class Continue {
    
    public static void main(String[] args) {
        int a = 5;

        while(a<=10){
            a++;
            
            if(a==7){
                continue;
            }
            System.out.println(a);
        }
    }
}
