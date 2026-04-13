import java.util.Scanner;
/*
Question 1 : Predict the output of the following program. What does the following fun2() do in general?
Answer: For a positive n, fun2(n) prints the values of n, 2n, 4n, 8n ... while the value is smaller than LIMIT. After printing values in increasing order, it prints same numbers again in reverse order. For example fun2(100) prints 100, 200, 400, 800, 800, 400, 200, 100. 
If n is negative, the function is returned immediately. 
*/
public class question1 {
    static final int LIMIT = 1000;

    public static void main(String[] args) {
        // Question 1 : Predict the output of the following program. What does the
        // following fun2() do in general?
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Number (number should be integer) : ");
        int num = sc.nextInt();
        fun2(num);
    }

    static void fun2(int num) {
        if (num <= 0)
            return;
        if (num > LIMIT)
            return;

        System.out.print(num + " ");
        fun2(2 * num);
        System.out.print(num + " ");
    }
    }
