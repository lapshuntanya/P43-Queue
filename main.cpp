#include "MyQueue.h"
#include "MyPriorityQueue.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    /*myQueue::Queue<int> nums;
    nums.show();

    nums.push_back(56);
    nums.push_back(23);
    nums.push_back(-356);
    nums.push_back(9);
    nums.show();

    //обробка черги
    while (!nums.isEmpty()) {
        nums.show();
        cout << "First: " << nums.first() << endl;
        nums.pop_front();
        cout << endl;
    }
    nums.show();*/


    myQueue::PriorityQueue<int> nums;
    nums.show();
    cout << "-----------------------\n";

    nums.push_back(12);
    nums.show();
    nums.push_back(18);
    nums.show();
    nums.push_back(1);
    nums.show();
    nums.push_back(6);
    nums.show();
    nums.push_back(34);
    nums.show();
    cout << "-----------------------\n";
    //обробка черги
    while (!nums.isEmpty()) {
        nums.show();
        cout << "First: " << nums.first() << endl;
        nums.pop_front();
        cout << endl;
    }
    nums.show();
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}