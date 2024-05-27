/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    result = nums.reduce((prev,ele)=>{
        prev.push(fn(prev[prev.length-1],ele));
        return prev
    },[init]);
    return result[result.length-1];
};
// Title: Array Reduce Transformation
