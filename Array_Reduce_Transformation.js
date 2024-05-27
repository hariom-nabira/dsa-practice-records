/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let val = init;
    for(const num of nums)
        val = fn(val,num);
    return val;
};
// Title: Array Reduce Transformation
