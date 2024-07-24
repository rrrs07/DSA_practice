// concept  

// in increasing order
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}

//for decreasing order just change the sign of the comparison operator to arr[j]<arr[j+1]




 for(int i = n-1; i>=0;i--){
            for(int j = 0; j<=i-1;j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
 }