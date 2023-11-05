package WT ;

interface A{
    public void show1();
}

interface B{
    public void show2();
}

class test implements A,B {
    public void show1(){
        System.out.println("Show 1");
    }
    public void show2(){
        System.out.println("Show 2");
    }   
}

public class Prog6 {
    public static void main(String[] args) {
        test t = new test() ;
        t.show1();
        t.show2();
    }
}
