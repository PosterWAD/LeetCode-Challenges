//0, 1, 1, 2, 3
class Solution {
public:
    int fib(int n) {
        int next = 1; //start na n = 1;
        int current = 0; //start na n = 0;
        int temp = 0;
        for (int i = 0; i < n; i++) {
            temp = current;
            current = next;
            next = temp + current;
        }
        return current;
    }
};