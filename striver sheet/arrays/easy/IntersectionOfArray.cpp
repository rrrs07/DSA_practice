// brute force


vector<int> ans;
int vis[m] ={0};
for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
        if(arr1[i] == arr2[j] && vis[j] == 0){
            ans.push_back(arr1[i]);
            vis[j] = 1;
            break;
        }
        if(arr1[i] < arr2[j]){
            break;
        }
    }
    return ans;
}



//optimal sol

int i = 0;
int j = 0;
vector<int> ans;
while(i< n && j<m){
    if(arr1[i] < arr2[j]){
        i++;
    }
    else if(arr1[i] > arr2[j]){
        j++;
    }
    else{
        
            ans.push_back(arr1[i]);
        
        i++;
        j++;
    }
}
return ans;