package WT;

class Even extends Thread{
    public void run(){
        for(int i=0;i<20;i+=2){
            System.out.println(i+" ");
            try {Thread.sleep(500);}
            catch (Exception e) {}
        }
    }
}

class Odd extends Thread{
    public void run() {
        for (int j = 1;j < 20 ;j += 2){
            System.out.println(j+" ");
            try {Thread.sleep(500);}
            catch (Exception e) {}
        }
    }
}


public class Prog8 {
    public static void main(String[] args) {
        Even e = new Even();
        Odd o = new Odd();
        e.start();
        try {Thread.sleep(500);}
        catch (Exception exception) {}
        o.start();
    }
}
