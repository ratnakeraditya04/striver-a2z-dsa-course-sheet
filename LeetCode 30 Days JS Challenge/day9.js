// Solution  - Memoize. 

// function memoize() {
//     const cache = {} ;
//     return function(...args) {
//         const key = JSON.stringify(args) ;
//         if(key in cache)
//         {
//             return cache[key] ;
//         }
//         const functionOutput = fn(...args) ; 
//         cache[key] = functionOutput; 
//         return functionOutput ; 
//     }
// }



// Method - 1 - REST / SPread Syntax - 

function memoize(fn) {
    const cache = {};
    return function(...args) {
      const key = JSON.stringify(args);
      if (key in cache) {
        return cache[key];
      }
      const functionOutput = fn(...args);
      cache[key] = functionOutput;
      return functionOutput;
    }
}

// Method - 2 - Argument Syntax 


function memoize(fn) {
    const cache = {};
    return function() {
  
      // convert arguments to string
      let key = '';
      for (const arg of arguments) {
        key += ',' + arg;
      }
  
      if (key in cache) {
        return cache[key];
      }
      const functionOutput = fn(...arguments);
      cache[key] = functionOutput;
      return functionOutput;
    }
}
