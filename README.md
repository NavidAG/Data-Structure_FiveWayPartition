# Data Structures: FiveWayPartition Quick Sort

You can find three-way QuickSort on the internet. [GeeksForGeeks](https://www.geeksforgeeks.org/3-way-quicksort-dutch-national-flag/) has done a great job covering this subject.
Here's a quick review of what three-way QuickSort is:
>In simple QuickSort algorithm, we select an element as pivot, partition the array around pivot and recur for subarrays on left and right of pivot. 
Consider an array which has many redundant elements. For example, {1, 4, 2, 4, 2, 4, 1, 2, 4, 1, 2, 2, 2, 2, 4, 1, 4, 4, 4}. If 4 is picked as pivot in Simple QuickSort, we fix only one 4 and recursively process remaining occurrences.
-[GeeksForGeeks](https://www.geeksforgeeks.org/3-way-quicksort-dutch-national-flag/)

My algorithm takes it to another level. In five-way QuickSort algorithm, we select 2 elements as pivots, partition the array around pivots and recur for subarrays on left and right of each pivot. 

#### Here is the example:
![test](https://github.com/NavidAG/Data-Structure_FiveWayPartition/blob/master/img/Screen%20Shot%202019-12-29%20at%2011.00.12%20AM.png)
![test](https://github.com/NavidAG/Data-Structure_FiveWayPartition/blob/master/img/Screen%20Shot%202020-01-02%20at%206.06.35%20PM.png)
