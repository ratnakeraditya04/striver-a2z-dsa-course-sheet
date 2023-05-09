/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    // Solution - 1 - Without Using Filter Method 
        // const result = [] ;
        // for(let i = 0 ; i < arr.length ; i++)
        // {
        //     if(fn(arr[i] , i))
        //         result.push(arr[i]); 
        // }
        // return result ;
    
    // Solution - 2 - Using Filter Method 
    
        // return arr.filter(fn) ;
    
    
    // Attempting To Solve this Problem with Multiple Methods 
    
    // Method - 1 - Using a Simple For Loop 
    
        // const transformedArray = [] ; 
        // for(let i = 0 ; i < arr.length ; i++)
        // {
        //     if(fn(arr[i] , i))
        //     {
        //         transformedArray.push(arr[i]) ;
        //     }
        // }
        // return transformedArray ; 
    
    // Method - 2 - For Each Loop in JS.
    
        // const transformedArray = [] ;
        // arr.forEach((element , index) => {
        //     if(fn(element , index)) 
        //     {
        //         transformedArray.push(arr[index]); 
        //     }
        // }, []) ; 
        // return transformedArray ; 
    
    // Method - 3 - Using For of Loop.
    
        // const transformedArray = [] ;
        // let index = 0 ; 
        // for(const element of arr)
        // {
        //     if(fn(element ,index))
        //     {
        //         transformedArray.push(element) ;
        //     }
        //     index++ ;
        // }
        // return transformedArray ; 
    
    
    // Method - 4 - Using While Loop - 
    
        // const transformedArray = [] ;
    
        // let i = 0 ; 
        // while(i < arr.length)
        // {
        //     if(fn(arr[i] , i))
        //     {
        //         transformedArray.push(arr[i]); 
        //     }
        //     i++ ; 
        // }
        // return transformedArray ;
    
    // Method - 5 Using Filter Function - 
    // Remember arr.filter creates a new array. It does modify the existing Array. But creates a new modified array to store the results. 
        return arr.filter((element , index) => fn(element , index)); 
        
    
    };