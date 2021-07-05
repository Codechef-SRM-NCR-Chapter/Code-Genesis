import java.util.Scanner;

class Q3 {
	public static int first(int a[], int l, int h, int x, int n)
	{
		if (h >= l) {
			int mid = l + (h - l) / 2;
			if ((mid == 0 || x > a[mid - 1]) && a[mid] == x)
				return mid;
			else if (x > a[mid])
				return first(a, (mid + 1), h, x, n);
			else
				return first(a, l, (mid - 1), x, n);
		}
		return -1;
	}

	public static int last(int a[], int l, int h, int x, int n)
	{
		if (h >= l) {
			int mid = l + (h - l) / 2;
			if ((mid == n - 1 || x < a[mid + 1]) && a[mid] == x)
				return mid;
			else if (x < a[mid])
				return last(a, l, (mid - 1), x, n);
			else
				return last(a, (mid + 1), h, x, n);
		}
		return -1;
	}

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int a[]  = {5,7,7,8,8,10};
		System.out.print("target:");
		int x=sc.nextInt();
		int n = a.length;
		System.out.print("{"+first(a, 0, n - 1, x, n)+","+last(a, 0, n - 1, x, n)+"}");
		
	}
}
