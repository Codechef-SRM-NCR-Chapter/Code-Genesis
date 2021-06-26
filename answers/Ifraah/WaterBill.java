import java.util.Scanner;

public class WaterBill {

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int id=s.nextInt();
		String nm=s.next();
		int l=s.nextInt();
		double amt = 0,totamt = 0;
		if(l<=199)
			amt=3*l;
		else if(l>=200 && l<400)
			amt=3.35*l;
		else if(l>=400 && l<600)
			amt=4.80*l;
		else if(l>=600)
			amt=5.10*l;
		if(amt>1250)
			totamt=amt + 0.15*amt;
		else
			totamt=amt;
			
		
		System.out.println(id);
		System.out.println(nm);
		System.out.println(l);
		System.out.println(totamt);
		
	}

}
