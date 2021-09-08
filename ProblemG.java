import java.util.Scanner;

public class ProblemG {
    public static void main(String[] args) {
        int i, t, n, speed, minSpeed, max;
        Scanner input = new Scanner(System.in);
        t = input.nextInt();
        for (i = 0; i < t; i++) {
            n = input.nextInt();
            max = 0;
            for (int j = 0; j < n; j++) {
                speed = input.nextInt();
                if (speed >= max) {
                    max = speed;
                }
            }
            System.out.println("Case " + (i + 1) + ": " + max);
        }
    }
}
