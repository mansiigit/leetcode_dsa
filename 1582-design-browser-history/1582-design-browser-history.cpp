class BrowserHistory {
    stack<string>bs;
    stack<string>fw;
public:

    BrowserHistory(string homepage) {
        bs.push(homepage);
    }
    
    void visit(string url) {
       
         while(!fw.empty())
            fw.pop();
             bs.push(url);
        
    }
    
    string back(int steps) {
        while (steps--){
        if(bs.size()>1){
                fw.push(bs.top());
                bs.pop();
        }
        else{
            break;
        }
        
    }
    return bs.top();
    }
    
    string forward(int steps) {
     while(steps--){
        if(!fw.empty()){
        bs.push(fw.top());
        fw.pop();
        }
        else{
            break;
        }
     }
     return bs.top();
    }
   
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */