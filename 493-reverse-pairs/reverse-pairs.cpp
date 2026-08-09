class Solution {
public:

    int merge(vector<int>& a , int left ,int mid , int right ){

        int count=0 ;
        int r = mid+1 ;

         for (int i = left; i <= mid; i++) {

            while (r <= right &&
                   (long long)a[i] > 2LL * a[r]) {

               
                r++;
            }
            count += r - (mid + 1);
        }


        int i = left ;
        int j = mid+1 ;
        int k = 0 ;
        
        vector<int> temp ;

        while(i<=mid && j<=right){
            if(a[i]<a[j]){
                temp.push_back(a[i]);
                k++;
                i++;
            }
            else{
                temp.push_back(a[j]);
                j++;
                k++;

                
            }
        }

        while(i<=mid){
             temp.push_back(a[i]);
                k++;
                i++;
        }
        
        while(j<=right){
            temp.push_back(a[j]);
                k++;
                j++;
        }

        for(int k=0 ; k<temp.size() ; k++){
            a[left+k]=temp[k];
        }

        return count ;
    }

    int mergeSort(vector<int>&a , int left , int right ){
        int count= 0 ;
        if(left>=right) return 0;

        int mid = left+(right-left)/2 ;

        count+=mergeSort(a , left , mid);
        count+=mergeSort(a , mid+1 , right);
        count+=merge( a , left , mid , right);

        return count;

    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums , 0 , nums.size()-1);
    }
};