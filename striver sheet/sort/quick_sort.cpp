public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int p=partition(arr, low, high);
            quickSort(arr, low, p-1);
            quickSort(arr, p+1, high);
        }
    }
    
    public:
    
    int partition(int arr[], int low, int high){
        int pivot = low;
        int i=low;
        int j=high;
        
        while(i<j){
            while(arr[i]<=arr[pivot]){
                i++;
            }
            while(arr[j]>arr[pivot]){
                j--;
            }
            if(i<j){
                swap(arr[j], arr[i]);
            }
        }
        swap(arr[j], arr[pivot]);
        return j;
    }



    //  public:
    // //Function to sort an array using quick sort algorithm.
    // void quickSort(int arr[], int low, int high)
    // {
    //     // code here
    //     if(low < high){
    //         int pIndex = partition(arr, low, high);
    //         quickSort(arr, low, pIndex-1);
    //         quickSort(arr, pIndex+1, high);
    //     }
    // }
    
    // public:
    // int partition (int arr[], int low, int high)
    // {
    //    // Your code here
    //    int pivot = low;
    //    int i = low;
    //    int j = high;
    //    while(i<j){
    //        while(arr[i] <= arr[pivot] && i<= high - 1){
    //            i++;
    //        }
    //        while(arr[j] > arr[pivot] && j>= low + 1){
    //            j--;
    //        }
    //        if(i<j) swap(arr[i], arr[j]);
    //    }
    //    swap(arr[low], arr[j]);
    //    return j;
    // }