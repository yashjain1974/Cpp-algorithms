public class Q3 {
    public static int search(int v, int[] arr) {
        return searchUtil(v, arr, 0, arr.length - 1);

    }

    private static int searchUtil(int tgt, int[] arr, int low, int hi) {
        int mid = (low + hi) / 2;
        if (low > hi) {
            return -1;
        }
        
    else{
        if (arr[mid] == tgt) {
            return mid;

        }
        
        else if (arr[mid] < tgt) {
            return searchUtil(tgt, arr, mid+1, hi);
        } else
            return searchUtil(tgt, arr, low, mid-1);
    
    }}

    public static void main(String[] args) {
    
        int [] arr={1,1,13,5,9,17,31,57,105,193,355,653};
        System.out.printf("Position of 105 is :%d " ,search(105,arr));
    }
}