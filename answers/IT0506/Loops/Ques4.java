import java.util.Scanner;

public class Ques4 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		System.out.println("a = "+a);
		int b=sc.nextInt();
		System.out.println("b = "+b);
		int i,j,bool;
		for(i=a;i<=b;i++) {
			if(i==1 || i==0)
				continue;
			bool=1;
			for(j=2;j<=i/2;++j) {
				if(i%j==0) {
					bool=0;
				}
			}
				if(bool==1)
					System.out.println(i);
		}
		

	}

}
