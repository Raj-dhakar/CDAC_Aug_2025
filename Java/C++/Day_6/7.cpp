#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Queue {
private:
    deque<T> arr;   

public:
    
    void enqueue(T value) {
        arr.push_back(value);
    }

    
    T dequeue() {
        if (!arr.empty()) {
            T frontVal = arr.front();
            arr.pop_front();
            return frontVal;
        }
        throw out_of_range("Queue is empty. Cannot dequeue.");
    }

    
    T front()  {
        if (!arr.empty()) {
            return arr.front();
        }
        throw out_of_range("Queue is empty. No front element.");
    }

    
    bool isEmpty()  {
        return arr.empty();
    }

    
    int size()  {
        return arr.size();
    }
};

int main() {
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.front() << endl;   // 10
    cout << "Dequeue: " << q.dequeue() << endl; // removes 10
    cout << "Front after dequeue: " << q.front() << endl; // 20

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
