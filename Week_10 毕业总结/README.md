算法训练营第10周学习笔记


10周训练营复习回顾
Serendipity：特别地努力，但是不知道这些努力最后能带来什么，最后可能有一天会有一个天大的机会跑过来的时候，你发现你之前的这些努力或者之前你还没有放弃的坚持，最后刚好可以用上，而让你收货一个巨大的*喜悦*发现原来那些特别的努力都没有白白浪费。

数据结构
一维基础：数组array（string），链表linked list
	高级：栈stack，队列queue，双端队列deque，集合set，映射map（hash / map），etc.

对于每一个数据结构的特点和它的时空复杂度都要很明确它的使用边界和自身特性。一提到哪个数据结构就要立即在头脑中反应想到它的插入时间复杂度和查询时间复杂度是多少、以及它的插入删除和访问的时间复杂度。数组和链表刚好是互补的。数组访问的时间复杂度是O（1），进行修改的时间复杂度是O（n）；链表访问的时间复杂度是O（n），进行修改的时间复杂度是O（1）；栈是先入后出，队列是先入先出；双端队列是可以在头部或者尾部进行出入的操作；set可以判断元素是否重复；map能判断key value storage，也就是有一个key有个value存在一起的时候；set划分为hashSet和treeSet，hashSet修改和访问的时间复杂度是O（1），而treeSet的原理是用二叉搜索树，所以的它的修改和访问的时间复杂度是O（longn）的；Map和Set也是一样的类似，分为hashMap和treeMap，也是一样相同的时间复杂度。
先入后出的栈是计算机里面经常使用的一个数据结构，所以现实问题中例如括号匹配问题，一定要先想到栈；第二个就是直方图，中间找一个最大面积以及它引申的一个题目——比如说很多水槽在下过雨之后最大面积的部分能盛装多少雨水？这样的问题都是用栈。
队列、以及双端队列关联的的题目第一时间要想到是滑动窗口问题；以及和它相关的就是优先队列，优先队列最近关联想到就是堆，以及得到第k大元素问题和堆排序问题。


二维基础：树tree，图graph
	高级：二叉搜索树binary search tree （red-black tree，AVL），堆heap，并查集disjoint set，字典树Trie，etc.

树和图，尤其是树，非常高频的经典问题，它经常牵扯道德算法就是分层遍历，或者深度优先遍历，分层遍历又称广度优先，它本身在现实问题要解决的逻辑问题的状态很多都是一棵树的结构；经典问题题目可以参考硬币兑换问题和爬楼梯问题。
高级数据结构主要是二叉搜索树（其第一特性就是一分为二）比根节点小的都在左子树，比根节点大的都在右子树；就得到了二叉搜索树的计算结构；在此基础上由于它不平衡，可以将它转换为平衡二叉搜索树，那么一般来说用的是AVL和红黑树；以及在此基础上会得到B树和B+树；树本身其中可以组成二叉树堆，需要注意的是堆本身又有很多其他的数据结构实现，不一定是用二叉堆来实现；但是一般需要手写一个堆的情况下，都是二叉堆，又分为大顶堆和小顶堆，写的过程是用数组来模拟堆来进行实现。


特殊————位运算bitwise，布隆过滤器bloomfilter
		LRU Cache

位运算的二进制计算方式和人脑习惯学来的十进制录入方式如果不转换的话就有很大的出入，转换的话就需要按计算机的机器思维去考虑，因为位运算本身是计算机自己底层的原始存储数据结构，所以实现很多算法时用位运算的代码会表示的非常简洁；与位运算在实际工程或者代码中最频繁的就是判断重复，比如递归的时、遍历的时、搜索时，经常会表示一个状态是否搜过了，那么用为运算来存储的效率就会非常的高；与同样出名的问题是N皇后和数独等，在搜索时都用位运算来解决。


Data Structure				Time Complexity																Space Complexity
					Average									Worst											Worst
					Access	Search	Insertion Deletion   	Access	Search	Insertion Deletion
Array				 O(1)	 O(n)	   O(n)		O(n)		  O(1)	 O(n)	   O(n)		O(n)				 O(n)

Stack				 O(n)	 O(n)	   O(1)		O(1)		  O(n)	 O(n)	   O(1)		O(1)				 O(n)
			
Queue				 O(n)	 O(n)	   O(1)		O(1)		  O(n)	 O(n)	   O(1)		O(1)				 O(n)

Singly-Linked List	 O(n)	 O(n)	   O(1)		O(1)		  O(n)	 O(n)	   O(1)		O(1)			     O(n)	

Doubly-Linked List	 O(n)	 O(n)	   O(1)		O(1)		  O(n)	 O(n)	   O(1)		O(1)				 O(n)

Skip List			 O(logn) O(logn)   O(logn)  O(logn)		  O(n)   O(n)	   O(n)		O(n)				 O(nlogn)

Hash Table			  N/A	  O(1)	   O(1)		O(1)		  N/A	 O(n)	   O(n)		O(n)				 O(n)

Binary Search Tree	 O(logn) O(logn)   O(logn)  O(logn)		  O(n)	 O(n)	   O(n)		O(n)				 O(n)

Cartesian Tree		 N/A	 O(logn)   O(logn)  O(logn)		  N/A	 O(n)	   O(n)		O(n)				 O(n)

B-Tree				 O(logn) O(logn)   O(logn)  O(logn) 	 O(logn) O(logn)   O(logn)  O(logn)				 O(n)

Red-Black Tree		 O(logn) O(logn)   O(logn)  O(logn) 	 O(logn) O(logn)   O(logn)  O(logn)				 O(n)

Splay Tree			 N/A	 O(logn)   O(logn)  O(logn) 	 N/A	 O(logn)   O(logn)  O(logn)				 O(n)

AVL Tree			 O(logn) O(logn)   O(logn)  O(logn) 	 O(logn) O(logn)   O(logn)  O(logn)				 O(n)

KD Tree				 O(logn) O(logn)   O(logn)  O(logn) 	 O(n)	 O(n)	   O(n)		O(n) 				 O(n)

上面这个图标在Internet上有完整的列表图，在bigocheatsheet.com上。


算法训练营的经典算法包括
if-else，switch ——> branch

for，while loop ——> Iteration

递归Recursion（Divide & Conquer，Backtrace）

搜素Search：深度优先搜索Depth First Search，广度优先搜素Breadth First Search，A*（启发式搜索），etc.

动态规划 Dynamic Programming

二分查找 Binary Search

贪心 Greedy

数学 Math，几何 Geometry

注意：平时在头脑里训练要经常回忆上面每种算法的思想和代码模板；所有把实际问题转化计算机问题，最后都要转到分支，循环或者递归调用上。


只要能转化计算机问题，即使再大、再复杂的问题，它都可以有局部的重复性，根据局部重复性进行扩展然后在套用计算机语言的递归或者循环，就基本上能非常巧妙以及简洁的解决这些问题。这就是计算机本质要解决的问题，它可以很傻很傻，但是它能解决很多很多重复性问题，而且它的准确性是百分之百。

化繁为简的思想：
1.人肉递归很低效、很累；
2.找到最近族简单方法，将其拆解成可重复解决的问题；
3.数学归纳法思维。
本质.寻找/破解复杂问题的重复性 ——>> 计算机指令集

练习算法的心法要点：
1.基本功是区别业余和职业选手的根本；深厚的功底来自于一遍一遍的过遍数；
2.（其中过遍数）刻意练习——练习缺陷弱点环节、不舒服、枯燥要转化、设计有趣去可量化的练习，如果能手写一个针对自己练习算法，每次练习、进步15.87%是最理想状态；
3.最大的误区是——遇到问题只做一遍；
4.（其中解决一遍不能熟练的环节）用算法训练营覃超老师的切题四件套的方法配合“五毒神掌”练习；
5.（其中“五毒神掌”和“过遍数”时）反馈是最重要的一个环节，其高效方法是——自己深度思考一刻钟，不能过长的思考逃避学习，之后看高手题解，特别版是LeetCode国际版的全球高票回答。


PS在平时对待问题时多多养成一个套路的算法习惯即——切题四件套：
1.Clarification- 明确题目意思、边界、数据规模；
2.Possible Solutions- 穷尽所有可能的解法（compare time / space, optimal solution）；
3.Coding- 代码简洁、高性能、美感
4.Test Cases
五部刷题法（五毒神掌）：
1.不要死磕，不会的一定要多看LeetCode/国际站的高票代码；
2.学会样例/模板代码，自己要掌握并会默写；
3.24小时候后把已经熟悉的代码和问题再回顾和编写；
4.一周后再重复步骤3动作；
5.需要面试前/1个月、3个月，在重复步骤3和4的练习套路。

Commencement：字面所指毕业典礼，它不仅有毕业的意思还有开始的意思，算法训练到这一刻时即是课程的毕业，又是算法精进的和面对更多、更难的问题而继续努力的开始。

