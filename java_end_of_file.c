import java.io.*;
import java.util.*;
import java.util.Scanner;
public class Solution {

    public static void main(String[] args) throws IOException {
            
       InputStreamReader insr =new InputStreamReader(System.in);
           BufferedReader be= new BufferedReader(insr);
        int i=1;
        String s;
        while((s= be.readLine())!=null)
       {
        System.out.println(i+" "+s);
        i++;
        }
    }
}
