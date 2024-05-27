/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const helper = (ele, indX) => {return fn(ele,indX)}
    return arr.map(helper)
};
// Title: Apply Transform Over Each Element in Array
