import java.util.Scanner;

public class ProblemA {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int result = ((n*n)+(n-1)*(n-1));

        System.out.println(result);
    }
}
