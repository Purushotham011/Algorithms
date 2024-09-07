//Simple implementation of priority queue using c++
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Declaring a priority queue
    priority_queue<int> pq;

    // Inserting elements into the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(15);

    // Printing the priority queue
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
