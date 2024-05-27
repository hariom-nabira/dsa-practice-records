/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var newArray = [];
    for(var i=0;i<arr.length;i++)
        newArray[i] = fn(arr[i],i);
    return newArray;
};
// Title: Apply Transform Over Each Element in Array
