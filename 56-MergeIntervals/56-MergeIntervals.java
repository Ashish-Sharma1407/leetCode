// Last updated: 6/27/2025, 2:30:56 AM
class Solution {
    public int[][] merge(int[][] intervals) {
        // Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));
        // int size = intervals.length - 1;
        // int times = 0;
        // while(times < intervals.length - 1){
        //     if(intervals[times][1] > intervals[times + 1][0]){
        //         intervals[times][1] = intervals[times + 1][1];
        //     }
        // }
        // return intervals;

        Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b[0]));

        int size = intervals.length;
        int[][] result = new int[size][2];   // To store merged intervals
        int idx = 0;

        result[0] = intervals[0];   // Initialize the first interval

        int times = 1;   // Start from the second interval
        while (times < size) {
            // If overlapping, merge intervals
            if (result[idx][1] >= intervals[times][0]) {
                result[idx][1] = Math.max(result[idx][1], intervals[times][1]);
            } else {
                idx++;
                result[idx] = intervals[times];
            }
            times++;
        }
        // Resize the result array to the actual size of merged intervals
        return Arrays.copyOf(result, idx + 1);
    }
}