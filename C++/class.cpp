#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breath;

    public:
    rectangle() {
        length=0;
        breath=0;}

    rectangle(int l,int b);

    int area(){
        return length*breath;
    }
    int perimeter(){
        return 2*(length+breath);
    }

    int getlength(){return length;}
    int getbreath(){return breath;}
    void setlength(int l){length=l;}
    void setbreath(int b){breath=b;}
    ~rectangle(){
        
    }
};

int main(){
    rectangle r(10,5);
    cout<<"area "<<r.area()<<endl;
    cout<<"perimeter "<<r.perimeter();
    return 0;
}