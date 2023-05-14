/**
 * @param {Function} fn
 * @return {Function}
 */
var curry = function(fn) {
    return function curried(...args) {
// Method - 1 - Using Recursive Implementation 

        // if(fn.length <= args.length)
        // {
        //     return fn(...args) ; 
        // }
        // else
        // {
        //     return function (...moreArgs){
        //         return curried(...args , ...moreArgs) ;
        //     };
        // }

// Method - 2 - Using Bind and Curried Built - In Implementation 

        if(fn.length <= args.length)
        {
            return fn.apply(this , args) ;
        }
        else
        {
            return curried.bind(this, ...args) ;
        }
    };
};

/**
 * function sum(a, b) { return a + b; }
 * const csum = curry(sum);
 * csum(1)(2) // 3
 */


// Algorithm 

/* 
Algorithm - Steps - 
1. The curry function takes a function (fn) as its parameter. This is the function that will be eventually executed with the curried arguments.
2. It returns a new function (curried) that is responsible for accumulating the arguments passed to it until the required number of arguments is reached. This function acts as a closure, remembering the accumulated arguments at each step.
3. curried is defined with the rest parameter syntax (...args) to accept a variable number of arguments, allowing partial application at each step.
4. Inside curried, a check is performed to see if the accumulated arguments are sufficient. If the number of arguments passed (args.length) is greater than or equal to the original function's arity (fn.length), then all required arguments have been provided. This is our base case.
5. If the sufficient arguments check passes, invoke fn with the spread syntax (...args) to pass all the collected arguments, and return the result.
6. If the number of arguments passed is not sufficient, then return an anonymous function that also uses the rest parameter syntax (...nextArgs). This allows for further accumulation of arguments.
7. When the anonymous function is called, it invokes curried again with the accumulated arguments from both args and nextArgs. This ensures that the arguments are passed in the correct order and merged together.
8. The process of accumulating arguments and invoking curried continues until the necessary number of arguments is met. This enables the flexibility to apply arguments in any combination of calls.
9. Once the necessary number of arguments is met, the original function (fn) is called with all the accumulated arguments, providing the same result as if the original function had been called directly with those arguments.
*/