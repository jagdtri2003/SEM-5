package WT;

import java.util.Scanner;

public class Prog9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name : ");
        String name = sc.nextLine();
        String words[] = name.split(" ");
        String abr = "";
        for(String x:words){
            abr+=x.charAt(0);
        }
        System.out.println("Abbreviation for your name : "+abr);
    }
}
