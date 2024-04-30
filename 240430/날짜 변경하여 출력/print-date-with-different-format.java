import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.useDelimiter("\\.");
        int year = sc.nextInt();
        int month = sc.nextInt();
        int day = sc.nextInt();
        sc.close();

        System.out.print(month+ "-" + day + "-" + year);
    }
}