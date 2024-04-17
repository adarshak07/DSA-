class MyStack {
private:
    queue<int> primary, secondary;
public:
    MyStack() {  
    }
    void push(int x) {
        primary.push(x);
    }
    int pop() {
        while(primary.size() != 1){
            secondary.push(primary.front());
            primary.pop();
        }
        int res = primary.front();
        primary.pop();
        while(!secondary.empty()){
            primary.push(secondary.front());
            secondary.pop();
        }
        return res;
    }
    int top() {
        while(primary.size() != 1){
            secondary.push(primary.front());
            primary.pop();
        }
        int res = primary.front();
        primary.pop();
        secondary.push(res);
        while(!secondary.empty()){
            primary.push(secondary.front());
            secondary.pop();
        }
        return res;
    }
    bool empty() {
        return primary.empty();
    }
};
