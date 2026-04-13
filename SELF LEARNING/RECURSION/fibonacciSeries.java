import java.util.Scanner;
public class fibonacciSeries {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your number: ");
        int x = sc.nextInt();

        int fibo = fibona(x);
        for(int i =0; i <x; i++){
            System.out.print(fibona(i) + " ");
        }
    }
    public static int fibona(int num){
        if(num ==0){
            return 0;
        }else if(num == 1 || num ==2){
            return 1;
        }else{
            return (fibona(num -1) + fibona(num-2));
        }
    }
}
