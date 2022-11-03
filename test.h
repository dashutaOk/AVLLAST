//
// Created by vh on 19.08.21.
//

#ifndef AVLLAST_TEST_H
#define AVLLAST_TEST_H


TEST (Group1, AVLOrderTest1) {
    TreeLib::AVLMap<int, int> map;
    for (int i = 0; i < 1000; ++i) {
        map.Insert(i, i);
    }
    ASSERT_EQ(map.begin()->key, 0);
}

TEST (Group2, SetTest) {
    std::string s = "qwertyuiopasdfghjklzxcvbnm";
    TreeLib::Set<char> sorted;
    for (auto&&x : s) {
        sorted.Insert(x);
    }

    std::sort(s.begin(), s.end());
    auto s2 = sorted.ToString();
    s2.erase(std::remove(s2.begin(), s2.end(), ' '), s2.end());
    ASSERT_EQ(s2, s);
}

TEST (Group3, Iterator) {
    TreeLib::AVLMap<int, int> tree;
    tree.Insert(0, 1);
    tree.Insert(1, 1);
    tree.Insert(2, 1);

    int sum = 0;
    for (auto x : tree){
        sum += x.second;
    };
    ASSERT_EQ(sum, 3);
}

TEST (Group3, OperatorGet) {
    TreeLib::AVLMap<int, int> tree;
    tree.Insert(0, 1);
    tree.Insert(1, 1);
    tree.Insert(2, 1);

    tree[1] = 8;

    int sum = 0;
    for (auto x : tree){
        sum += x.second;
    };
    ASSERT_EQ(sum, 10);
}

/*
TEST (Group3, Delete) {
    TreeLib::AVLMap<int, int> tree;
    tree.Insert(0, 1);
    tree.Insert(1, 1);
    tree.Insert(2, 1);

    tree.Delete(2);


    ASSERT_FALSE(tree.Contains(2));
}
 */


/*
TEST (Group1, AVLOrderTest2) {
    TreeLib::AVLMap<int, int> map;
    for (int i = 0; i < 1000; ++i) {
        map.Insert(i, i);
    }
    ASSERT_EQ((--map.end())->key, 999);
}
*/

#endif //AVLLAST_TEST_H
