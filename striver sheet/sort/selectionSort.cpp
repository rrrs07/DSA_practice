// gfg question
int select(int arr[], int i, int n)
    {
        
        int min = i;
        //TO COMPARE FROM NEXT ARRAY ELEMENT
        for (int j = i+1; j< n; j++){
            if(arr[j] < arr[min])
            min = j;
        }
        
        return min;
    }
    
    void selectionSort(int arr[], int n)
    {
       //code here
         for(int i=0;i<n-1;i++){
           int minimum =select(arr,i,n);
            int temp =arr[i];
            arr[i]=arr[minimum];
            arr[minimum]=temp;
         }
       
    }