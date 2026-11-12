#include <iostream>
using namespace std;

int main(){
    system ("Cls");

    int arr[2][3][4];
    int temp1 = 4;
    int temp2 = 5;
    int arr2[2][3][4];
    int arr1[2][3][4];

    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                arr[i][j][k] = temp2 - 1;
                temp2 += 5;
                arr1[i][j][k] = arr[i][j][k];}
            }
        };

    for (int i = 1; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                arr[i][j][k] = temp1;
                temp1 += 4;
                arr2[i][j][k] = arr[i][j][k];}
            }
        };

    //         for (int i = 0; i < 1; i++){
    //     cout << "\nTabel " << i + 1 << endl;
    //     for (int j = 0; j < 3; j++){
    //         for (int k = 0; k < 4; k++){
    //             cout << arr1[i][j][k] / arr2[i][j][k]<< " ";
    //         }
    //         cout << endl;
    //     }
    // }

    for (int i = 0; i < 1; i++){
        cout << "\nTabel " << i + 1 << endl;
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                cout << arr1[i][j][k] << " ";
            }
            cout << endl;
        }
    }

        for (int i = 1; i < 2; i++){
        cout << "\nTabel " << i + 1 << endl;
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                cout << arr2[i][j][k] << " ";
            }
            cout << endl;
        }
    }


    cout << "rata-rata : " <<(temp2 + temp1)/2.0;

}
