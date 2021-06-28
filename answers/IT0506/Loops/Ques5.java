import java.util.Scanner;
public class Ques5{
	static void find2largest(int a[], int n)
{
	int s;
	int l=s=Integer.MIN_VALUE;
	for(int i=0;i<n;i++)
	{
	l=Math.max(l,a[i]);
	}
	for(int i=0;i<n;i++)
	{
	if(a[i] != l)
	s=Math.max(s,a[i]);
	}
	if(s==Integer.MIN_VALUE)
	System.out.println("-2147483648");
	else
	System.out.println(s);
}
public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[50];
		for(int i=0;i<n;i++){
		a[i]=sc.nextInt();
		}
	find2largest(a,n);
}
}