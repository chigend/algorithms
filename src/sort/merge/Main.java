package sort.merge;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    static int[] t;

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(in.readLine());
        t = new int[n];
        String[] arr = in.readLine().split(" ");
        int[] nums = new int[n];
        for(int i = 0; i < n; i++) nums[i] = Integer.parseInt(arr[i]);
        mergeSort(nums, 0, n - 1);
        for (int i = 0; i < n; i++) System.out.print(nums[i] + " ");
    }

    public static void mergeSort(int[] nums, int l, int r) {
        if (l >= r) {
            return;
        }

        int mid  = l + r >> 1;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        int i = l, j = mid + 1, k = 0;
        while (i <= mid && j <= r) {
            if (nums[i] < nums[j]) t[k++] = nums[i++];
            else t[k++] = nums[j++];
        }
        while (i <= mid) t[k++] = nums[i++];
        while (j <= r) t[k++] = nums[j++];
        for (i = l, j =0; i <= r; i++, j++) nums[i] = t[j];
    }
}
