import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    /*
     * Complete the timeConversion function below.
     */
    static String timeConversion(String s) {
        /*
         * Write your code here.
         */
         
         String[] time;
         String time24 ="";
         if(s.substring(8).equals("PM")){
             s = s.replace("PM", "");
             time = s.split(":");
             time24 = ((time[0].equals("12"))?"12":(Integer.parseInt(time[0])+12))+":"+time[1]+":"+time[2];
         }
         else if(s.substring(8).equals("AM")){
             s = s.replace("AM", "");
             time = s.split(":");
             time24 = ((time[0].equals("12"))?"00":time[0])+":"+time[1]+":"+time[2];
         }
         return time24;

    }

    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scan.nextLine();

        String result = timeConversion(s);

        bw.write(result);
        bw.newLine();

        bw.close();
    }
}
