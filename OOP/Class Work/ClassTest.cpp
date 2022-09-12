#include <iostream>
using namespace std;
const int m = 50;
class item{
    int itemCode[m];
    int itemPrice[m];
    int count;
public:
    void CNT(void){
        count = 0;
    }
    void getData(void);
    void displaySum(void);
    void displayItems(void);
};
void item :: getData(void){
    cout << "Enter Item code : ";
    cin >> itemCode[count];

    cout << "Enter Price :";
    cin >> itemPrice[count];
    count++;
}
void item :: displaySum(void){
    float sum = 0;
    for(int i = 0; i < count; i++){
        sum += itemPrice[i];
    }
    cout<<"\n---------------------";
    cout << "\nTotal value : "<<sum;
}
void item :: displayItems(void){
    cout << "\n\nItem code - Item price";
    cout << "\n---------   ---------";
    for(int i = 0; i < count; i++){
        cout << "\n   "<<itemCode[i]<<"   -    "<<itemPrice[i];
    }
}

int main() {
    item order;
    order.CNT();
    order.getData();
    order.getData();
    order.getData();
    order.getData();
    order.displayItems();
    order.displaySum();
    return 0;
}
