void rotateMatrix(vector<vector<int>>& arr, int n) {
	    // code here   
	    for(int i=0;i<n;i++) {
	        for(int j=i+1;j<n;j++) {   //transpose kar rahe hai , row colums , coulns row , ek half ka heee ,diagonal neglect feel 
	            swap(arr[i][j],arr[j][i]);
	        }
	    }
	    
	    reverse(arr.begin(),arr.end());
	}
