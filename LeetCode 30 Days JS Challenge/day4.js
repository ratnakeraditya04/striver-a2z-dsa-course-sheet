/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    // Solution - 1  - Without Using Map Function 
        // const result = []; 
        // for(let i = 0 ; i < arr.length ; i++)
        // {
        //     result.push(fn(arr[i] , i)); 
        // }
        // return result ; 
    
    // Solution - 2 - With Using Map Function 
    
        // return arr.map(fn) ;
    
    // Attempting Again this Problem 
        const result = [] ; 
        for(let i = 0 ; i < arr.length ; i++ )
        {
            result.push(fn(arr[i] , i)); 
        }
        return result ; 
        
        
    };