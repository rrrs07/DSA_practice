vector<int>ans;
for(i=0;i<n;i++){
    int new = (i+k)%n;
    ans[new] = arr[i];
}
nums = ans;


// brute force sol
int n = nums.size();
      k = k % n;
      int temp[k];

    //temp for storing
      for(int i = 0; i<k; i++){
        temp[i] = nums[i];
      }

      //shifting
      for(int i = k; i<n; i++){
        nums[i - k] = nums[i];
      }

      // place back temp in array
      for(int i = n-k; i<n; i++){
        nums[i] = temp[i - (n-k)];
      }



      //optimal sol
      k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        reverse(nums.begin()+(nums.size()-k),nums.end());
    
        reverse(nums.begin(),nums.end());