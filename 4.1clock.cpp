#include<iostream>
using namespace std;

//类的定义
class Clock{
    public:
    void setTime(int newT,int newM,int newS);
    void showTime();
    private:
    int hour,minute,second;
};

//成员函数实现
void Clock::setTime(int newT,int newM,int newS){
    hour=newT;
    minute=newM;
    second=newS;
}
inline void Clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second<<":"<<endl;
}
//主函数
int main(){
    Clock myclock;          //定义对象myclock
    cout<<"first time set and output:"<<endl;
    myclock.setTime(0,0,0);      //调用函数成员
    myclock.showTime();
    cout<<"second time set and output:"<<endl;
    myclock.setTime(8,30,30);
    myclock.showTime();
    return 0;
}
