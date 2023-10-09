package WT;

class parent{
    void fun1(){
        System.out.println("fun 1");
    }
    void fun2(){
        System.out.println("fun 2");
    }
}

public class SingleInheritance extends parent{
    public static void main(String[] args) {
        parent obj = new parent();
        obj.fun1();
        obj.fun2();
    }
}

