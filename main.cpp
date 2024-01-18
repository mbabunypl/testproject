#include <iostream>
#include <string>
#include <queue>
#include <memory>
using namespace std;

struct Task{
    public:
        Task(){
            pq = queue<int>{};
        }

        void insert(int x){
            pq.push(x);
        }

        void pop(){
            pq.pop();
        }

        int front(){
            return pq.front();
        }

        void print(){
            if(!pq.empty()){
                for(int i=0;i<pq.size();i++){
                    cout << pq[i] << endl;
                }
            }
        }

        
    private:
        queue<int> pq;

    
};




int main(){

    unique_ptr<Task> objptr = make_unique<Task>();
    objptr->insert(32);

}