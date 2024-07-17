int peakIndexInMOuntainArray(vector<int>& arr){\
    int n =arr.size();
    int s= 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid] < arr[mid+1]){
            //A wali line mein hu
            // peak exist at right

            s = mid+1;
        }
        else{
            //B line pe huin
            // ya toh peak pr hu

            e = mid;

        }
        //mid update
        mid = s+(e-s)/2;
    }
    return s;
}
