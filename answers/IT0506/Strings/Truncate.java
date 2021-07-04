import java.util.Scanner;
public class Truncate {
	static  String truncateSentence(String s, int k) {
        int space_idx = -1;
        int num_spaces = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '  ') {
                num_spaces++;
            }
            if (num_spaces == k) {
                space_idx = i;
                break;
            }
        }
        
    }
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
String s=sc.nextLine();
int k=sc.nextInt();
System.out.println(truncateSentence(s, k));
}
}