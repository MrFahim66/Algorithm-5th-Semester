import java.util.Scanner;

public class ProblemI {
    public static void main(String[] args) {
        int i, j, games, change = 0;
        Scanner input = new Scanner(System.in);
        games = input.nextInt();
        int A[] = new int[games];
        int B[] = new int[games];

        for (i = 0; i < games; i++) {
            A[i] = input.nextInt();
            B[i] = input.nextInt();
        }

        for (i = 0; i < games; i++) {
            for (j = 0; j < games; j++) {
                if ((i != j) && A[i] == B[j]) {
                    change++;
                }
            }
        }
        System.out.println(change);
    }
}
