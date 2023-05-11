/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
	return function(x) {
// Method - 1 - Using a loop to evaluate the Solution. 
        // let init = x ; 
        // for(let i = functions.length - 1 ; i >= 0 ; i--)
        // {
        //     init = functions[i](init); 
        // }
        // return init ;

// Method 2 - Using ReduceRight Property 
        // if(functions.length === 0) return x ; 
        // return functions.reduceRight((ac , func) => func(ac) , x) ;  
    
// Method - 3 - Using For Of Loop 
            
        // let init = x ; 
        // for(const element of functions.reverse()) {
        //     init = element(init) ;
        // }
        // return init ;

// Method - 4 - Using ForIn Loop 

        // let init = x ; 
        // for(const i in functions.reverse()) {
        //     init = functions[i](init) ; 
        // }
        // return init ;

// Method - 5 - Using  For Each Loop - 

        let init = x ; 
        functions.reverse().forEach((element) => {
            init = element(init) ;
        }); 
        return init ; 
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 * */

