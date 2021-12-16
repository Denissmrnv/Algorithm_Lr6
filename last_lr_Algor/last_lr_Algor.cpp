#include <iostream>
#include <cstdlib>

using namespace std;

struct Node;
typedef Node* refNode;

struct Node {
    refNode next;
    int dat;
};

int countNumList(refNode cur) {
    int countMain = 0, count;
    refNode m = cur;
    refNode n;
    while (((m->next) != 0)) {
        countMain++;
        m = m->next;
        n = cur;
        count = 0;
        while (n->next != m->next) {
            n = n->next;
            count++;
        }
        if (count != countMain) 
            return countMain;
    }
    return countMain ;
}

int main() {

    int x, choice, buff = 1, count = 0, n;
    refNode List = new Node, curList = List;
    refNode q = NULL;

    setlocale(LC_ALL, "Russian");
    
    cout << " Введите кол-во элементов в списке \n";
    cin >> n;

    cout << " Выберите тип списка \n";
    cout << " 1 Линейный \n";
    cout << " 2 Кольцевой \n";
    cin >> choice;


    if (choice == 2) {
        cout << " Введите порядковый номер элемента, до которого хотите закольцевать \n";
        cin >> buff;
    }
    if ((buff < 0) || (buff > n)) {
        cout << " Incorrect index \n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        x = rand();
        curList->next = new Node;
        curList = curList->next;
        curList->dat = x;
        count++;
        if (count == buff)
            q = curList;
    }
    if (choice == 1)
        curList->next = 0;
    else 
        curList->next = q;
    curList = List;

    cout << "Кол-во элементов в списке: " << countNumList(curList) << " \n";

    //while (((curList->next) != 0)) {
    //    curList = curList->next;
    //    cout << curList->dat << "\n";
    //}
    return 0;
}
