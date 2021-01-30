算法训练营第05周学习笔记


*失败只有一种，就是半途而废！*
*你比别人多一点执着，你就会创造奇迹！*

训练营期中回顾
Array 数组					Search 查询
LinkedList 链表				Recursion 递归
Stack 栈						DFS 深度优先搜索
Queue 队列					BFS 广度优先搜索
HashTable 哈希表				Divide & Conquer 分治
Set、Map						Backtracking 回溯
BinaryTree 二叉树				Greedy 贪心
BST 二叉搜索树				BinarySearch 二叉查找

分治/回溯/递归/动态规划,它的有一个共同解决问题的目的就是将其分解成各种子问题，同时寻找它的重复性，它们只有处理一些非常细节的问题才有区别，在解决问题的思想问题上几乎没有本质上的区别。
把递归的“模板”一定要练成“肌肉型记忆”——
c/c++代码模板:
void recursion (int level, int param) {
	// recursion terminator
	if (level > MAX_LEVEL) {
	 //process result
	return ;
	}

	// process current logic
	process (level, param);

	// drill down
	recursion (level + 1,param);

	// reverse the current level status if needed
}

c/c++分治代码模板：
int divide_conquer (problem *problem, int params) {
	// recursion terminator
	if (problem == nullptr) {
		process_result
	return retrun_result;	
	}

	// process current problem
	subproblems = split_problem (problem, data)
	subresult1 = divide_conquer (subproblem[0], p1)
	subresult2 = divide_conquer (subproblem[1], p1)
	subresult3 = divide_conquer (subproblem[2], p1)
	...

	// merge
	result = process_result (subresult, subresult2, subresult3)
	//revert the current level status

	return 0;
}


解决复杂问题应该第一时间想到——分治/回溯/递归/动态规划：
1.人肉递归低效、易错而且还很累；
2.找到最近、最简单方法，将其拆解成可重复解决的问题；
3.数学归纳法思维（抵制人肉递归的诱惑）；
本质.寻找重复性 ——> 计算机指令集。
（如果在最开始练习不熟悉非要人肉递归可以吧状态图画出来）

动态规划（Dynamic Programming）
1.定义：DP是一种在数学、管理科学、计算机科学、经济学和生物信息学中使用的，通过把原问题分解为相对简单子问题的方式求解复杂问题的方法。DP常常适用于有重叠子问题和最优子结构性质的问题，动态规划方法所耗时间往往远少于朴素解法。DP背后的基本思想非常简单——大致上，若要解一个给定问题，我们需要解其不同部分（子问题），再根据子问题的解以得出原问题的解。通常许多子问题非常相似，为此DP法试图仅仅解决每个子问题一次，从而减少计算量（一旦某个给定子问题的解已经算出，则将其记忆化存储，以便下次需要同一个子问题解之时直接查表。）这种做法在重复子问题的数目关于输入的规模呈指数增长时特别有用;
2.“Simplifying a complicated problem by breaking it down into simpler subproblems”(in a recursive manner);
3.Divide & Conquer + Optimal substructure.

它本质上要解决的问题就是递归问题或分治问题;它和普通的递归不一样的地方就在第三点，需要分治+最优子结构。所以DP和分治是有内在联系的，它们并不是完全割裂的两个算法。动态规划和递归/分治的关键区别在于——动态规划和递归或分治没有根本区别（主要看是否有最优子结构）；共性——找到重复子问题（因为计算机指令只会for else和loop）；最终解——最优子结构中途淘汰次优解。


