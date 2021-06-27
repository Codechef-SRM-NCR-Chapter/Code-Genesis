import java.util.Scanner;
public class TotalSalary {

	public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int bs=sc.nextInt();
	char gr=sc.next().toCharArray()[0];
	int aw;
	double hra= 0.2 * bs;
	double da=0.5*bs;
	double pf=0.11*bs;
	if(gr=='A') {
		aw=1700;
	}
	else if(gr=='B') {
		aw=1500;
	}
	else {
		aw=1300;
	}
	double tot=bs+hra+da+aw-pf;
	int res=(int) tot;
	System.out.println(res);
	
	}

}
