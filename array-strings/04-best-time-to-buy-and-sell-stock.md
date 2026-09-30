# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

I tracked the minimum price seen so far and calculated the profit that could be obtained by selling on each later day. I kept the maximum profit found during the scan.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

If prices continually decrease, the maximum profit remains 0.
