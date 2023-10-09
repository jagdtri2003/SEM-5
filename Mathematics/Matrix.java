package Mathematics;

public class Matrix {
    private int[][] data;

    public Matrix(int[][] data) {
        this.data = data;
    }

    public Matrix add(Matrix other) {
        int rows = data.length;
        int cols = data[0].length;
        int[][] result = new int[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return new Matrix(result);
    }

    public Matrix subtract(Matrix other) {
        int rows = data.length;
        int cols = data[0].length;
        int[][] result = new int[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = data[i][j] - other.data[i][j];
            }
        }

        return new Matrix(result);
    }

    public void display() {
        for (int i = 0; i < data.length; i++) {
            for (int j = 0; j < data[i].length; j++) {
                System.out.print(data[i][j] + " ");
            }
            System.out.println();
        }
    }
}
