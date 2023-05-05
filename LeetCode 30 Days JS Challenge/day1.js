var createHelloWorld = function() {
    return function(...args)
    {
        return "Hello World" ; 
    }
}

// Traditional JS Function 

const add1 = function(a , b) {
    return a + b ; 
}

// Using Arrow Operator 


const add2 = (a , b) => (a + b) ; 
// Contributed to removal of Explicit Return Statement. 