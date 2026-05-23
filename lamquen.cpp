#include <iostream>
using namespace std;
class hoc{
    private:
    public:
};
struct date{
    int d;
    int y;
};
struct kichthuoc{
    int dai;
};
int main(){
    date *ds = new date[5];
    delete[] ds;
    return 0;
}