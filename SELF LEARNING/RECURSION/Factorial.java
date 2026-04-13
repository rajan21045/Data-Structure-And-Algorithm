public class Factorial {
    public static void main(String[] args){
        int num = 5;
        int fact = factorial(num);
        System.out.println("Factorial of " + num + " is: " + fact);
    }
    public static int factorial(int num){
        if(num <= 1){
            return 1;
        }else{
            return num * factorial(num-1);
        }
    }
}
