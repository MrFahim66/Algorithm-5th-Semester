import java.util.Scanner;

public class ProblemB {
    public static boolean isPalindrome(int u) {
        int answer = 0, temp;
        temp = u;

        while (u != 0) {
            answer = answer * 10 + u % 10;
            u = u / 10;
        }
        return answer == temp;
    }

    public static void main(String[] args) {
        int i, test_case;
        int UserInput;

        Scanner input = new Scanner(System.in);

        test_case = input.nextInt();

        for (i = 0; i < test_case; i++) {
            UserInput = input.nextInt();
            boolean var = isPalindrome(UserInput);
            if(var == true){
                System.out.println("Case "+(i+1)+": Yes");
            }
            else{
                System.out.println("Case "+(i+1)+": No");
            }
        }
    }
}

