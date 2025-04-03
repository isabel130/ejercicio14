#include <iostream>
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    double datos;


    cout<<"Uso de datos mensual (GB): ";
    cin>>datos;



    if (datos<2) {
        cout << "Se recomienda el plan Basico";
    }
    else if (datos<=5) {
        cout << "Se recomienda el plan Estándar";
    }
    else if (datos<=10) {
        cout << "Se recomienda el plan Premium";
    }
    else {
        cout << "Se recomienda el plan Ilimitado";
    }
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.