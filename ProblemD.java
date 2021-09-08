import java.util.Scanner;

public class ProblemD {
    public static void main(String[] args) {
        int i, t, b, p, f, h, c, totalProfit;
        Scanner input = new Scanner(System.in);

        t = input.nextInt();

        for (i = 0; i < t; i++) {
            b = input.nextInt();
            p = input.nextInt();
            f = input.nextInt();
            h = input.nextInt();
            c = input.nextInt();

            if (h > c) {
                if ((b / 2) >= p) {
                    totalProfit = p * h;
                    b = (b / 2) - p;
                    if (b >= f) {
                        totalProfit = totalProfit + f * c;
                    } else {
                        totalProfit = totalProfit + b * c;
                    }
                } else {
                    totalProfit = (b / 2) * h;
                }
            } else  {
                if ((b / 2) >= f) {
                    totalProfit = f * c;
                    b = (b / 2) - f;
                    if (b >= p) {
                        totalProfit = totalProfit + p * h;
                    } else {
                        totalProfit = totalProfit + b * h;
                    }
                } else {
                    totalProfit = (b / 2) * c;
                }
            }
            System.out.println(totalProfit);
        }
    }
}
