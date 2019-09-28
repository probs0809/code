import java.util.Scanner;
import java.util.Random;

public class Matrix{

	public static void main(String args[]){
		int n = 0;

		Random r = new Random();
		n = r.nextInt(4);
		int matrix2[][] = new int[n][n];		
		int matrix1[][] = new int[n][n];
		int temp[][] = new int[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j< n ;j++){
				matrix1[i][j] = r.nextInt(9);
				matrix2[i][j] = r.nextInt(9);
			}
		}

		for(int i = 0; i < n; i++){
                        for(int j = 0; j< n ;j++){
                                System.out.print(" " + matrix1[i][j]);
                        }
			System.out.println();
                }

		for(int i = 0; i < n; i++){
                        for(int j = 0; j< n ;j++){
                                System.out.print(" " + matrix2[i][j]);
                        }
                        System.out.println();
                }

		for(int i = 0; i < n; i++){
                        for(int j = 0; j< n ;j++){
				temp[i][j] = 0;
                                for(int k = 0; k < n; k++){
					temp[i][j] += matrix1[i][k]*matrix2[k][j];
				}
                        }
                }

		for(int i = 0; i < n; i++){
                        for(int j = 0; j< n ;j++){
                                System.out.print(" " + temp[i][j]);
                        }
                        System.out.println();
                }	
	}

}
