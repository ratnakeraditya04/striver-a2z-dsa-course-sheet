// Various Methods to implement Reduce in JS. 

// Method - 1 - Using Standard Implementation. 
// var reduce = function(nums ,fn , init ) {
//     let accumulator = init ; 
    
//     for(let i = 0 ; i < nums.length ; i++)
//     {
//         accumulator = fn(accumulator , nums[i]); 
//     }
//     return accumulator ; 
// }

// Method - 2 - Using ForOf loop 

// var reduce = function(nums ,fn ,  init ) {
//     let accumulator = init ; 

//     for(const element of nums) {
//         accumulator = fn(accumulator , element) ;
//     }
//     return accumulator ; 
// }

// Method - Using ForIn loop 

// var reduce = function(nums ,fn ,init) {
//     let accumulator = init ; 
//     for(const i in nums)
//     {
//         accumulator = fn(accumulator , nums[i]) ; 
//     }
//     return accumulator; 
// }

// Method - Using For Each Function  

var reduce = function(nums, fn, init) {
    let accumulator = init ; 
     
    nums.forEach((element) => {
        accumulator = fn(accumulator , element) ; 
    } , [] ) ; 

    return accumulators ; 
}