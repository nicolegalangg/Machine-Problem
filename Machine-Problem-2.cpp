#include <iostream> 
#include <cmath>
#include <conio.h> 


using namespace std; 
//pi 3.14
int main()
{ 
    float Cvol, Clat, Cbas,Csa, Crad, Chei; 
    float Pvol, Plat, Pbas, Psa, Plen, Pwid, Phei; 
    float Svol, Ssa, Srad; 
    float pi = 3.14; 
    char again; 
    char s; 
    
    while (again == 'Y' || again == 'y');
    {
        cout << "\nGeometric Calculator" << endl;
        cout << "The three geometric shapes that can be calculated are: " << endl; 
        cout << "Enter C for the calculation of the volume, lateral area, base area and surface area of a Cone" << endl; 
        cout << "Enter P for the calculation of the volume, lateral area, base area, and surface area of a Pyramid" << endl;
        cout << "Enter S for the calculation of the volume and surface area of a Sphere" << endl; 
        cout << "\nSelect the geometric shape to be calculated: "; 
        cin >> s; 
        
        
        switch (s)
        {
            case 'c':
            case 'C':
        {
            cout << "The radius of the Cone: ";
            cin >> Crad;
            cout << "The height of the cone: "; 
            cin >> Chei; 
            Cvol = Crad * Crad * (Chei / 3) * pi;
            Clat = Crad * sqrt((Chei * Chei) + (Crad * Crad)) * pi; 
            Cbas = Crad * Crad * pi; 
            Csa =pi * Crad * (Crad + sqrt((Chei * Chei) + (Crad * Crad)));
            
            cout << "\nThe volume is: " << Cvol << " cubic units";
            cout << "\nThe lateral area is: " << Clat << " square units";
            cout << "\nThe base area is: " << Cbas << " square units"; 
            cout << "\nThe surface area is: " << Csa << " square units";
            cout << "\n\nQuit the calculator or not? (Y/N): ";
            cin >> again; 
            
            break; 
        }
        case 'p':
        case 'P':
        {
            cout << "The length of the Pyramid: "; 
            cin >> Plen; 
            cout << "The width of the Pyramid: "; 
            cin >> Pwid; 
            cout << "The height of the Pyramid: "; 
            cin >> Phei; 
            Pvol = (Phei * Pwid * Plen) / 3; 
            Pbas = Plat * Plen;
            Plat = (Plen * sqrt(((Pwid / 2) * (Pwid / 2)) + (Phei * Phei)) + Pwid * sqrt(((Plen / 2) * (Plen / 2)) + (Phei * Phei)));
            Psa = Plat + Pbas; 
            
            cout << "\nThe volume is: " << Pvol << " cubic units";
            cout << "\nThe lateral area is: " << Plat << " square units"; 
            cout << "\nThe base area is: " << Pbas << " square units"; 
            cout << "\nThe surface area is: " << Psa << " square units"; 
            cout << "\n\nQuit the calculator or not? (Y/N): ";
            cin >> again; 
            
            break; 
        }
        case 's':
        case 'S': 
        {
            cout << "The radius of the Sphere: ";
            cin >> Srad; 
            Svol = ((4 * pi * (Srad * Srad * Srad)) / 3);
            Ssa = ((Srad * Srad) * pi * 4); 
            
            cout << "\nThe volume is: " << Svol << " square units";
            cout << "\nThe surface area is: " << Ssa << " square units"; 
            cout << "\n\nQuit the calculator or not? (Y/N): "; 
            cin >> again; 
            
            break; 
        }
        default:
			cout << "The input is invalid";
        }
    } 
    
    
    
    if (again == 'n' || again == 'N');
    {
        cout << "Exiting the geometric calculator";
    }
        
        
        _getch();
        return 0;
}
