/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    return nums.reduce((prev,ele,index)=>{
        return fn(prev,ele);
    },init);
};
// Title: Array Reduce Transformation
