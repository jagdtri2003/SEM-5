package WT;

import java.util.Scanner;
public class Prog7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,b;
        System.out.print("Enter the value of a and b:");
        a=sc.nextInt();
        b=sc.nextInt();
        try{
            System.out.println("a/b = "+(a/b));
        }catch(Exception e){
            System.out.println(e);
        }finally{
            System.out.println("Program is Completed");
        }
    }
}
