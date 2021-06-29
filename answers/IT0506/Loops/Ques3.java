import java.util.Scanner;

public class Ques3 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("N=");
		int n=sc.nextInt();
		 int sp = n/2;
        for(int i=1;i<=(n/2)+1;i++){
            int st = (2*i)-1;
            for(int j=1;j<=sp;j++){
                System.out.print(" ");
            }
            sp--;
            for(int j=1;j<=st;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        sp = 1;
        for(int i=(n/2);i>=1;i--){
            int st = (2*i)-1;
            for(int j=1;j<=sp;j++){
                System.out.print(" ");
            }
            sp++;
            for(int j=1;j<=st;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}