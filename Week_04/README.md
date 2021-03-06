算法训练营第04周学习笔记

深度优先搜索和广度优先搜索：
搜索的时候多数都是采用的暴力搜索或者比较简单朴素的搜索也就是在搜索的时候没有任何只能情况的考虑，也就是把所有要搜索的内容都遍历一遍才能找到想要的结果。
这个数据结构是一个很普通的树或者图，遍历每个节点都去访问且只访问一次。
在树中想找一个值要从根节点开始，先搜左子树、在一个个节点走过去，再走右子树，最后遍历所有节点找到最终的结果。
实现搜索遍历时：
1.每个节点都要访问一次；
2.每个节点仅访问一次；
3.对于节点的访问顺序不限——深度优先（depth first search）和广度优先（breadth first search）。

其余的搜索就不再是深度和广度优先了，而是按照优先级优先或者随意定义处理。
在现实场景中更多都是按照优先级优先，而把这样的算法一般称作启发式搜索；优先级优先多数用在推荐算法和高级搜索算法。

深度优先搜索永远是从根节点开始的，逐渐先向单方向的最深度走，然后在回到根节点查找下一个子节点再次优先到最深层的叶子节点，依次深度排序计算。
深度优先是从一个根节点下来，中断每一层的循环，继续下专，直到最下一层不能再下探为止。

广度优先是一层一层向下扩散，把一层循环结束后再到下一层从头开始遍历到此层的进度，然后再转到下一层，直到最后一层的最后一个位置。广度优先就像水滴，点到水面上后从水滴落入的中心向外一层层扩散。

把深度优先和广度优先类比人的学习状态如下：
深度优先就像找到了一个知识点，比如学习斐波那契数列就把之类的题从简答到高难至奥数类的全去练一遍，与人脑的聚焦收敛型思维比较接近。
广度优先就像刚开始学习编程时，先从最简单语言结构本身开始，然后与语言有关的数据结构再到相关的算法再关联上，之后再一点点加深在扩散与之相关的编程技巧整个历程与人脑的发散型思考方式比较接近。

广度优先搜索的代码结构是用一个队列来表示，这个队列就是一个数组，如果在Java里面多数情况是一个链表或者是一个双端队列（deque）来表示；在Python中就是用数组来表示，也可以用一个高性能的connection库里面有一个双端队列（deque）这样的数据结构。即一开始队列为空，然后把开始节点加入到队列里面去，同时也要维护visited节点，然后只要队列不为空，就把这个visited节点往里加就可以了，同时从这个节点扩散出它周围的节点依次加到这个队列中去，这样就产生了一个效果就是在这个队列的点一个一的去访问。队列本身是先入先出，所以就会按照这个节点的顺序再一个一个从队列里面取出来。（按照排队来看就在这个产生队列的queue，然后把最开始的节点放到队列里面，每次从队列里面取了之后把它的子节点再放到队列中去，它就按照这层次的遍历惯性逐渐走下去）

DFS和BFS的原理和代码模板需要熟练手写，这两个程序模板是比较固话的，它的本质就把所有节点都访问且只访问一遍，按照访问的次序不一样分为DFS和BFS；写这两个程序的过程中可以用循环的方式也可以用递归的方式。递归的程序比较简单，因为程序用系统会形成一个自动维护的栈，也就是函数调用的栈。而在广度优先搜索时，程序就没法来自动维护queue这样数据结构，必须去手动维护，为了能维护就必须手写这样一个程序。


贪心算法（Greedy）
贪心算法是一种在每一步选择中都采取在当前状态下最好或最优的选择，从而希望导致结果是全局最好或最优的算法。

贪心算法与动态规划的不同在于贪心算法对每个子问题的解决方案都是做出选择，不能回退；动态规划算法则会保存以前的运算结果，并根据以前的结果对当前进行选择，并且同时也带有回退功能。

【贪心：当下做局部最优判断且不回退；回溯：能够回退；动态规划：最优判断+回退（回退的前提是动态规划会*保存*之前的运算结果）并且在适当的时候进行回退重新选择】

贪心算法可以解决一些最优化问题，如：求图中最小生成树、哈夫曼编码等；然而对于工程和生活中的问题，贪心算法一般不能得到我们所要求的答案。
一旦一个问题可以通过贪心算法来解决，那么贪心算法一般是解决这个问题的最好办法；由于贪心算法的高效性和所求得的答案比较接近最优结果，所以贪心算法也可以用作辅助算法或者直接解决一些要求结果不特别精确地问题。
适用贪心算法的场景：问题能够分解成子问题来解决，子问题的最优解能递推到最终问题的最优解——这种子问题最优解称为最优子结构。
贪心算法与动态规划的不同在于它对每个子问题的解决方案都做出当下选择，不能回退；动态规划则会保存以前运算结果，并根据以前的结果对当前进行选择，有回退功能。


二分查找（Binary Search）
在有序的前提条件下进行查找，因为二分查找的有序特征可以判断排除一半的查找范围不需要搜索；所以它必须在查找区间是单调的递增或者递减；如果它是无序的情况下就没办法进行二分查找了，弱需要查找只能从头到尾遍历。
1.目标函数单调性（单调递增或者递减）
2.存在上下界（bounded）
3.能够通过索引访问（index accessible）

在工程中一般更常用的方法是用牛顿迭代法替代二分查找。
使用牛顿迭代法可以得到一个正实数的算术平方根，在的迭代过程中，以直线代替曲线，用一阶泰勒展式（在当前点的切线）代替原曲线，求直线与x轴的交点，重复这个过程直到收敛，故称牛顿迭代法。
