#include <iostream>

using namespace std;
double itemOnePrice = 0.0;
double itemTwoPrice = 0.0;
double totalprice;
double customerOwe = 0.0;
int halfOff = 2;

int main()
{
    cout << "The price of the first item being purchased : ";
    cin >> itemOnePrice;

    cout << "The price of the second item being purchased : ";
    cin >> itemTwoPrice;

        if (itemOnePrice < itemTwoPrice){
            totalprice = (itemOnePrice / 2) + itemTwoPrice;

        }


        else{
            totalprice = (itemTwoPrice / 2) + itemOnePrice;       }



     cout << "Total Cost = $ " << totalprice << endl;




    return 0;
}
