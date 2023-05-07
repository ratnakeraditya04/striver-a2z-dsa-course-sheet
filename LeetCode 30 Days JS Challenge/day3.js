var createCounter = function(init) {
    const tempp = init ; 
    return {
        increment : () => {
            init++ ;
            return init ;
        }, 
        decrement : () =>{
            init-- ;
            return init ;
        },
        reset : () =>{
            init = tempp; 
            return init ;
        }
    } 
};

// Through this Question, I learnt how to define an object in JS. How to definr multiple functions with different names?  