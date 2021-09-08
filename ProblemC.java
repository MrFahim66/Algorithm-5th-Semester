import java.util.Scanner;

public class ProblemC {
    public static void main(String[] args) {
        int i, n, x, y, result;

        Scanner input = new Scanner(System.in);

        n = input.nextInt();

        for (i = 0; i < n; i++) {
            x = input.nextInt();
            y = input.nextInt();
            if (y >= x) {
                result = (y * 4) + (2 * 5) + (3 * 3);
            } else {
                result = (x - y) * 4 + (x * 4) + (2 * 5) + (3 * 3);
            }
            System.out.println("Case "+(i+1)+": "+result);
        }
    }
}
