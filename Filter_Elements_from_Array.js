/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    newArray = [];
    arr.forEach((e,i)=>{
        if(fn(e,i))
            newArray.push(e);
    });
    return newArray
};