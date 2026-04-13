import java.util.Scanner;
public class sumUsingRecursion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int sum = SumNumber(num);
        System.out.println(sum);
    }
    public static int SumNumber(int num){
        if(num==0){
            return 0;
        }else{
            return num + SumNumber(num-1);
        }
    }
}