import java.util.Scanner;
import java.util.HashMap;
class Q2 {
	static class pair {
		int f, s;
		public pair(int f, int s)
		{
			this.f = f;
			this.s = s;
		}
	}

	static void findFourElements(int arr[], int n, int tg)
	{
		HashMap<Integer, pair> mp= new HashMap<Integer, pair>();
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				mp.put(arr[i] + arr[j], new pair(i, j));

		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				int sum = arr[i] + arr[j];

				if (mp.containsKey(tg - sum)) {
					pair p = mp.get(tg - sum);
					if (p.f != i && p.f != j&& p.s != i && p.s != j) {
						System.out.print(arr[i] + ", " + arr[j] + ", "+ arr[p.f] + ", "+ arr[p.s]);
						return;
					}
				}
			}
		}
	}

	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		int[] arr=new int[109];
		System.out.print("Enter the size of array(N):");
		int n=s.nextInt();
		for(int i=0;i<n;i++)
		{
		arr[i]=s.nextInt();
		}
		System.out.print("target:");
		int tg=s.nextInt();
		findFourElements(arr, n, tg);
	}
}
