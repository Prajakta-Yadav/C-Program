public class RhombusPattern {
    public static void printPattern(int n){
        int i, j;
        
        for(i=1; i<=n; i++){

            //inner loop print space
            for (j =1; j<= n-i; j++){
                System.out.print(" ");
            }

            // inner loop print star
            for(j=1; j<=n; j++){
                System.out.print("*");
            }

            // new row
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n=6;
        printPattern(n);
    }
}
