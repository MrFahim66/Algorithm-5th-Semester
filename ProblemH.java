import java.util.Arrays;
import java.util.Scanner;

public class ProblemH {
    public static void main(String[] args) {
        int i,n,t;

        Scanner input = new Scanner(System.in);
        t = input.nextInt();

        for(i=0; i<t; i++){
            n = input.nextInt();
            int park[] = new int[n];
            for(int j=0; j<n;j++){
                park[j]= input.nextInt();
            }
            Arrays.sort(park);
            int result = 2*((park[n-1])-park[0]);
            System.out.println(result);
        }
    }
}
