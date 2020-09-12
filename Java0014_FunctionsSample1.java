import java.util.Scanner;

public class Java0014_FunctionsSample1 {

    public static int isTriangular(int number) {

        for (int i = 1; number > 0; i++)
            number -= i;
        if (number == 0)
            return 1;
        return 0;
    }

    public static void main(String[] args) {

        int x;
        Scanner s = new Scanner(System.in);
        do {

            x = s.nextInt();
            if (isTriangular(x) == 1)
                System.out.println(x+" is a triangular number");
            else
                System.out.println(x+" is NOT a triangular number");
        } while(x >0);
    }
}
