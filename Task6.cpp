#include <iostream>
using namespace std;
void calculation(int);
main()
{
    int day;
    cout << "Enter the period: ";
    cin >> day;
    calculation(day);
}
void calculation(int day)
{
    int treated = 0, untreated = 0;
    int doc = 7, patients;
    for (int count = 1; count <= day; count++)
    {

        cout << "Enter the number of patients: ";
        cin >> patients;
        if (count % 3 != 0)
        {
            if (patients >= doc)
            {
                treated = treated + doc;
                untreated = untreated + (patients - doc);
            }
            else
            {
                treated = treated + patients;
            }
        }
        else if (count % 3 == 0)
        {
            doc = doc + 1;
            if (patients >= 7)
            {
                treated = treated + doc;
                untreated = untreated + (patients - doc);
            }
            else
            {
                treated = treated + patients;
            }
        }
    }
    cout << "Treated Patients: " << treated << endl;
    cout << "Untreated Patients: " << untreated << endl;
}
