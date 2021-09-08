import java.util.Scanner;
import java.lang.*;

public class ProblemF {
    public static void main(String[] args) {
        int x = 0, len;
        String player;
        StringBuffer player1 = new StringBuffer();
        Scanner input = new Scanner(System.in);

        player1.append(player = input.next());
        len = player1.length();
        for (int i = 0; i < len-1; i++) {
            if (player.charAt(i) == player.charAt(i+1)) {
                ++x;
                player1.deleteCharAt(i);
                player1.deleteCharAt(i);
                len = player1.length();
                i = -1;
            }
        }
        if(x%2 == 1){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}
