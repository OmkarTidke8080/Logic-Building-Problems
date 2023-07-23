// write  a program which accept number form user and display the below pattern

/*
 input : 7846

 output :       7  8  4  6
                7  8  4  
                7  8  
                7  
 */

import java.util.*;

public class Program3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the array: ");
        int n = sc.nextInt();

        System.out.println("Enter the array");
        int Arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            Arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            int k = 0;
            for (int j = 0; j < (n - i); j++) {
                System.out.print(Arr[k] + "\t");
                k++;
            }
            System.out.println();
 }
}
}
