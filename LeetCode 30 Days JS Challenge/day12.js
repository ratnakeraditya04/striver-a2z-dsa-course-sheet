/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var timeLimit = function(fn, t) {
	return async function(...args) {
// Method - 1 - Using Promise and Its Methods 
        // return new Promise((resolve , reject) => {

        //     const timeout = setTimeout(() => {
        //         reject("Time Limit Exceeded") ; 
        //     } , t) ;

        //     fn(...args)
        //         .then(resolve)
        //         .catch(reject)
        //         .finally(() => {
        //             clearTimeout(timeout)
        //         })
        // })

// Method - 2 - Using Promise RACE Method 
        const processPromise = fn(...args) ;

        const timeoutPromise = new Promise((_, reject) => {
            setTimeout(() => {
                reject("Time Limit Exceeded") ; 
            } , t); 
        })

        return Promise.race([processPromise , timeoutPromise]) ; 
    }
};

/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */