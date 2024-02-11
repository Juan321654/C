// let nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// for (let i = 0, j = nums.length - 1; i < j; i++, j--) {
//   let temp = nums[i];
//   nums[i] = nums[j];
//   nums[j] = temp;
// }

// console.log(nums);






function findNumber(arr = [], num = 0) {
  let start = 0;
  let end = arr.length - 1;
  let middleDown = Math.floor(arr.length / 2);
  let middleUp = middleDown;

  while (start <= end && middleDown >= start && middleUp <= end) {
    if (arr[start] === num || arr[end] === num || arr[middleDown] === num || arr[middleUp] === num) {
      return true;
    }
    start++;
    end--;
    middleDown--;
    middleUp++;

    // Adjusting the middle pointers if they cross the bounds
    if (middleDown < start) middleDown = start;
    if (middleUp > end) middleUp = end;
  }
  return false;
}
let nums2 = [5, 8, 1, 6, 10, 56, 20, 30, 25, 15, 2, 7, 9, 4, 3, 11, 12, 13, 14, 16, 17, 18, 19, 99, 94, 48];

console.time('findNumber');
console.log(findNumber(nums2, 17)); // true
console.timeEnd('findNumber');
