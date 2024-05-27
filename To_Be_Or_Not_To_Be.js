/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    let obj = {
        toBe: (arg) => {
            if(val===arg)
                return true;
            else
                throw new Error("Not Equal");
        },
        notToBe: (arg)=> (val!==arg)?true:false
    };
    return obj;
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */