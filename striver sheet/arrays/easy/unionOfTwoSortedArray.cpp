//brute force
 vector <int> v;
        for(int i=0; i<n; i++)
            v.push_back(arr1[i]);
        for(int i=0; i<m; i++)
            v.push_back(arr2[i]);
        sort(v.begin(), v.end());
        // unique entry
        int ptr=0;
        for(int i=1; i<v.size(); i++)
        {
            if(v[i]!=v[ptr])
            {
                ptr++;
                v[ptr]=v[i];
            }
        }
        ptr++;
        v.erase(v.begin()+ptr, v.end());
        return v;


//optimal sol
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i = 0;
        int j = 0;
        vector<int> unionArr;
        while(i<n && j<m){
            if(arr1[i] <= arr2[j]){
                if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                    unionArr.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                    unionArr.push_back(arr2[j]);
            }
                j++;
            }
        }
        while(j<m){
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                    unionArr.push_back(arr2[j]);
            }
                j++;
        }
        while(i<n){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                    unionArr.push_back(arr1[i]);
            }
                i++;
        }
        return unionArr;
    }
};


