import java.util.Scanner;

public class Crdnt {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int x=s.nextInt();
		int y=s.nextInt();
		if(x>0 && y>0) {
			System.out.println("Quadrant 1");
		}
		if(x<0 && y>0) {
			System.out.println("Quadrant 2");
		}
		if(x<0 && y<0) {
			System.out.println("Quadrant 3");
		}
		if(x>0 && y<0) {
			System.out.println("Quadrant 4");
		}
		if(y==0) {
			System.out.println("X axis");
		}
		if(x==0) {
			System.out.println("Y axis");
		}
		if(x==0 && y==0) {
			System.out.println("Origin");
		}
		

	}

}
