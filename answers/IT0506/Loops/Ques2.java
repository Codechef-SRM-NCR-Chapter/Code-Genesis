import java.util.Scanner;
public class Ques2 {

	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	System.out.print("N=");
	int n=sc.nextInt();
		 for(int i=1;i<=n;i++){
         for(char a = (char)('A' +(n-i));a<=(char)('A'+n-1);a++){
            System.out.print(a);  
         }
          System.out.println( );
         
     }

	}

}
