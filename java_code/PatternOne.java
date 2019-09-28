import java.util.Scanner;

public class PatternOne{
    public static void main(String args[]){
        int x;
        Scanner s = new Scanner(System.in);
        System.out.println("Please input length: ");
        x = s.nextInt();
        s.close();
        for(int i = 0; i<= x; i++){
            for(int j = 0; j <= i; j++){
                System.out.print((j%2 == 0)?" ":"  ");
            }
            for(int j = 0; j <= x; j++){
                System.out.print(" *");
            }
            System.out.println("");
        }
    }
}