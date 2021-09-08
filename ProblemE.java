import java.util.Scanner;

public class ProblemE {
    public static int gapBetweenPages(int x, int y, int d) {
        return Math.abs((x - y) + (d - 1)) / d;
    }

    public static void main(String[] args) {
        int i, t, n, x, y, d;
        Scanner input = new Scanner(System.in);
        t = input.nextInt();
        for (i = 0; i < t; i++) {
            n = input.nextInt();
            x = input.nextInt();
            y = input.nextInt();
            d = input.nextInt();

            int xyDiff = Math.abs(x - y);
            int result = 100000;

            if (xyDiff % d == 0) {
                result = Math.min(result, gapBetweenPages(x, y, d));
            }
            xyDiff = y - 1;
            if (xyDiff % d == 0) {
                result = Math.min(result, gapBetweenPages(x, 1, d) + gapBetweenPages(1, y, d));
            }
            xyDiff = n - y;
            if (xyDiff % d == 0) {
                result = Math.min(result, gapBetweenPages(x, n, d) + gapBetweenPages(n, y, d));
            }

            if (result == 100000) {
                result = -1;
            }
            System.out.println(result);
        }

    }
}
