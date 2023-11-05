package WT;

class Demo{
    Demo(){
        System.out.println("Default Constructor !!");
    }
    Demo(int a){
        this();
        System.out.println("Parameterized Constructor !!");
    }
}

public class Prog5 {
    public static void main(String[] args) {
        Demo aObj = new Demo(10);
    }

}
