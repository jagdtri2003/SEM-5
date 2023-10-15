package WT;
import Mathematics.Matrix;

public class Prog4 {
    public static void main(String[] args) {
        int[][] data1 = {{1, 2}, {3, 4}};
        int[][] data2 = {{5, 6}, {7, 8}};

        Matrix matrix1 = new Matrix(data1);
        Matrix matrix2 = new Matrix(data2);

        Matrix sum = matrix1.add(matrix2);
        System.out.println("Matrix Sum:");
        sum.display();

        Matrix difference = matrix1.subtract(matrix2);
        System.out.println("Matrix Difference:");
        difference.display();
    }
}
