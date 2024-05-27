/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var newArray = []
    const helper = (ele, indX) => {newArray[indX] = fn(ele,indX)}
    arr.forEach(helper)
    return newArray
};
// Title: Apply Transform Over Each Element in Array
