import java.util.Arrays;

class SelectionSort {
  void selectionSort(int arr[]) {
    for (int step = 0; step < arr.length - 1; step++) {
      int minidx = step;
      for (int i = step + 1; i < arr.length; i++) {
        if (arr[i] < arr[minidx]) {
          minidx = i;
        }
      }      
      int temp = arr[step];
      arr[step] = arr[minidx];
      arr[minidx] = temp;
    }
  }

  public static void main(String args[]) {
    int[] data = {3,4,5,1,2};
    SelectionSort sorter = new SelectionSort();
    sorter.selectionSort(data);
    System.out.println(Arrays.toString(data));
  }
}
