/**
 * @return {Function}
 */
var createHelloWorld = () => {
  const greeting = "Hello World";
  
  return function() {
    return greeting;
  };
}


/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */
// Title: Create Hello World Function
