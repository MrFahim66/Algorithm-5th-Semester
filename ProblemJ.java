import java.util.Scanner;

public class ProblemJ {
    public static void main(String[] args) {
        int i,n,k=0;
        Scanner input= new Scanner(System.in);
        n= input.nextInt();
        k= input.nextInt();

        int[] playerList = new int[n];

        for(i=0; i<n; i++){
            playerList[i] = input.nextInt();
        }
        int cutLine = playerList[k-1];
        int counter = 0;
        for(i=0; i<n; i++){
            if((playerList[i]>=cutLine) && (playerList[i]>0)){
                counter++;
            }
        }
        System.out.println(counter);
    }
}
