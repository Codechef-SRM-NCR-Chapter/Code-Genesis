import java.util.Scanner;

public class Date {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int d=sc.nextInt();
		int m=sc.nextInt();
		int y=sc.nextInt();
		switch(m) {
		case 01:
			System.out.print("January"+" "+d+" "+y);
			 break;
		case 02:
			System.out.print("February"+" "+d+" "+y);break;
		case 03:
			System.out.print("March"+" "+d+" "+y);break;
		case 04:
			System.out.print("April"+" "+d+" "+y);break;
		case 05:
			System.out.print("May"+" "+d+" "+y);break;
		case 06:
			System.out.print("June"+" "+d+" "+y);break;
		case 07:
			System.out.print("July"+" "+d+" "+y);break;
		case 8:
			System.out.print("August"+" "+d+" "+y);break;
		case 9:
			System.out.print("September"+" "+d+" "+y);
			break;
		case 10:
			System.out.print("October"+" "+d+" "+y);
		case 11:
			System.out.print("November"+" "+d+" "+y);break;
		case 12:
			System.out.print("December"+" "+d+" "+y);break;
			default: System.out.println("Not a valid month number");break;
		}
		

	}

}
