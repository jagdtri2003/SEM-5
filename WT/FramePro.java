package WT;
import java.awt.*;
import java.awt.Frame;

public class FramePro extends Frame {
    Button b;
    TextField t1,t2;
    FramePro(){
        super("Frame Pro");
        setSize(400, 350);
        setVisible(true);
        setLayout(new GridLayout(2, 2));
        t1 = new TextField("Enter Your name");
        t2 = new TextField("Enter Your age");
        add(t1);
        add(t2);
        // creating a button and adding it to the frame
        b = new Button ("Submit");
        add (b);
    }
}

class demo1{
    public static void main (String[] args){
        new FramePro();
    }
}
