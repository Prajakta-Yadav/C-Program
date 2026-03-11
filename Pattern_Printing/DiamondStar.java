public class DiamondStar {
    public static void printPattern(int n){
        int i, j;

        //outer loop
        for(i=1; i<=n; i++){

            //inner loop print space
            for(j=1; j<=n-i; j++){
                System.out.print(" ");
            }

            //inner loop print star
            for(j=1; j<=2 * i - 1; j++){
                System.out.print("*");
            }

            System.err.println();
        }

        //handle lower part
        for(i= n-1; i>=1; i--){
            for(j=1; j<=n-i; j++){
                System.out.print(" ");
            }

            for(j=1; j<=2 * i-1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void main (String args[]){
        int n =6;
        printPattern(n);
    }
}
