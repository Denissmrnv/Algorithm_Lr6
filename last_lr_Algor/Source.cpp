//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//struct Node;
//typedef Node* refNode;
//
//struct Node {
//    refNode next;
//    int dat;
//};
//
//int countNumLineList(refNode cur) {
//    int countMain = 0, count;
//    refNode m = cur;
//    refNode n;
//    while (((m->next) != 0)) {
//        countMain++;
//        m = m->next;
//        n = cur;
//        count = 0;
//        while (n->next != m->next) {
//            n = n->next;
//            count++;
//        }
//        if (count != countMain)
//            return countMain;
//    }
//    return countMain;
//}
//
//int main() {
//
//    int x, choice, buff, count = 0, n;
//    refNode List = new Node, curList = List;
//
//    setlocale(LC_ALL, "Russian");
//
//    cout << " Выберите кол-во элементов в списке \n";
//    cin >> n;
//
//    cout << " 1 Линейный \n";
//    cout << " 2 Закольцованный \n";
//
//    cin >> choice;
//
//    switch (choice) {
//    case 1:
//        cout << " Заполните линейный список (признак окончания ввода - ноль) \n";
//        cin >> x;
//        while (x != 0) {
//            curList->next = new Node;
//            curList = curList->next;
//            curList->dat = x;
//            cin >> x;
//        }
//        curList->next = 0;
//        curList = List;
//        break;
//
//    case 2:
//        refNode q = NULL;
//        cout << " Введите порядковый номер элемента, до которого хотите закольцевать \n";
//        cin >> buff;
//        cout << " Заполните закольцованный список (признак окончания ввода - ноль) \n";
//        cin >> x;
//        do {
//            curList->next = new Node;
//            curList = curList->next;
//            curList->dat = x;
//            cin >> x;
//            count++;
//            if (count == buff)
//                q = curList;
//        } while (x != 0);
//
//        curList->next = q;
//        curList = List;
//
//        break;
//    }
//
//    cout << "Кол-во элементов в списке: " << countNumLineList(curList) << " \n";
//
//    //while (((curList->next) != 0)) {
//    //    curList = curList->next;
//    //    cout << curList->dat << "\n";
//    //}
//
//    return 0;
//}
