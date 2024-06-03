class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int a=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>arr[i+1] && i+1<n){
	            a=i+1;
	            break;
	        }
	    }
	    return a;
	}

};
