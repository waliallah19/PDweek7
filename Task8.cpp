#include <iostream>
using namespace std;
void calculation(int num);
main()
{
    int num;
    cout << "Enter number of cargos: ";
    cin >> num;
    calculation(num);
}
void calculation(int num)
{
    int weight, price, minibus_count = 0, truck_count = 0, train_count = 0;
    float avgprice,total_weight = 0.0, minibus_percentage, truck_percentage, train_percentage;
    float minibus = 0.0, truck = 0.0, train = 0.0;
    for (int i = 1; i <= num; i++)
    {
        cout << "Enter the tonnage of current cargo: ";
        cin >> weight;
        total_weight = total_weight + weight;
        if (weight <= 3)
        {
            price = weight * 200;
            minibus = minibus + price;
            minibus_count = minibus_count + weight;
        }
        else if (weight > 3 && weight < 12)
        {
            price = weight * 175;
            truck = truck + price;
            truck_count = truck_count + weight;
        }
        else if(weight > 11)
        {
            price = weight * 120;
            train = train + price;
            train_count = train_count + weight;
        }
    }
    avgprice = (minibus + truck + train) / total_weight;
    minibus_percentage = (minibus_count / total_weight) * 100.0;
    truck_percentage = (truck_count / total_weight) * 100.0;
    train_percentage = (train_count / total_weight) * 100.0;
    cout<<"Average price per ton: "<<avgprice<<endl;
    cout<<"Percentage of cargo transported by minibus is "<<minibus_percentage<<"%."<<endl;
    cout<<"Percentage of cargo transported by truck is "<<truck_percentage<<"%."<<endl;
    cout<<"Percentage of cargo transported by train is "<<train_percentage<<"%."<<endl;
}