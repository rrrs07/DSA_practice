
//btote force

vector<int> temp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }
        int nz = temp.size();
        for(int i=0;i<nz;i++){
            nums[i] = temp[i];
        }

         for(int i=nz;i<n;i++){
            nums[i] = 0;
         }

//optimal sol
 int j=-1;
 for(i=0;i<n;i++){
     if(nums[i] != 0){
         j++;
         swap(nums[i],nums[j]);
     }
 }