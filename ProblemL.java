import java.util.Arrays;
import java.util.Scanner;

public class ProblemL {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int T, i, j, n;

        T = input.nextInt();
        for (i = 0; i < T; i++) {
            n = input.nextInt();
            int[] Array1= new int[n];
            int[] Array2= new int[n];
            for(j=0;j<n;j++){
                Array1[j] =input.nextInt();
                if(Array1[j]>Array1[j+1]){
                    int maxDiff = Array1[j]-Array1[j+1];
                    Array2[j] = maxDiff;
                }
            }
            Arrays.sort(Array2);
            System.out.println(Array2[0]);

        }
    }
}
