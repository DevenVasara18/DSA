/*
Approach 
- Create an empty result array to store the merged intervals.
- Traverse the intervals and add all intervals that end before the new interval starts, because they do not overlap.
- While the current interval starts before or at the new interval's ending point, merge them by updating:
  - start = min(start, intervals[i][0])
  - end = max(end, intervals[i][1])
- Add the merged interval to the result array.
- Add all remaining intervals because they start after the merged interval ends.
- Return the result array.
*/
/*

*/