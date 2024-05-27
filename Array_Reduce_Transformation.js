/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    val = init;
    for(const num of nums)
        val = fn(val,num);
    return val;
};