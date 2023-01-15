class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
// Better Solution - O(N) - Time Complexity - Two Pass Solution 
	   // int maxiEle = 0 ; 
	   // for(int i = 0 ; i < n ; i ++)
	   // {
	   //     if(arr[i] > maxiEle)
	   //     {
	   //         maxiEle = arr[i]; 
	   //     }
	   // }
	   // int secondLargestIdx = -1 ;
	   
	   // for(int i = 0 ; i < n ; i++)
	   // {
	   //     if(arr[i] < maxiEle && arr[secondLargestIdx] <= arr[i])
	   //     {
	   //         secondLargestIdx = arr[i] ; 
	   //     }
	   // }
	   // if(secondLargestIdx == -1 )
	   // {
	   //     return -1 ;
	   // }
	   // return arr[secondLargestIdx] ; 
	   
// Most Optimal Solution - O(N) - Time Complexity - Single Pass Solution 

        int secondLarge = -1 ; 
        int large = -1 ; 
        for(int i = 0; i < n ;i ++)
        {
            if(arr[i] > large)
            {
                secondLarge = large ; 
                large = arr[i] ; 
            }
            else if(arr[i] >=secondLarge && arr[i] != large)
            {
                secondLarge = arr[i] ; 
            }
        }
        return secondLarge ; 
	}
};