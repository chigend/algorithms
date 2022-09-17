package sort.quick;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.Buffer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(in.readLine());
        String[] arr = in.readLine().split(" ");
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) nums[i] = Integer.parseInt(arr[i]);
        quickSort(nums, 0, n - 1);
        for (int i = 0; i < n; i++) System.out.print(nums[i] + " ");
    }

    private static void quickSort(int[] nums, int l, int r) {
        if (l >= r) {
            return;
        }
        int p = nums[l + r >> 1], i = l - 1, j = r + 1;
        while (i < j) {
            do i++;while (nums[i] < p);
            do j--;while (nums[j] > p);
            if (i < j) {
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }
        }

        quickSort(nums, l, j);
        quickSort(nums, j + 1, r);

    }
}
