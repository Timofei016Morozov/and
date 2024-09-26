#include <iostream>

int main() {


    setlocale(LC_ALL, "Russian");

 
    double distanceAB, distanceBC, totalWeight;
    const double tankCapacity = 500; 
    const double fuelConsumption[5] = { 2.0, 5.0, 8.0, 10.0, -1.0 };

    std::cout << "Введите расстояние от пункта A до пункта B (км): ";
    std::cin >> distanceAB;

    std::cout << "Введите расстояние от пункта B до пункта C (км): ";
    std::cin >> distanceBC;

    std::cout << "Введите общий вес видеокарт (кг): ";
    std::cin >> totalWeight;

    double consumptionRate;
    if (totalWeight <= 400) {
        consumptionRate = fuelConsumption[0];
    }
    else if (totalWeight <= 900) {
        consumptionRate = fuelConsumption[1];
    }
    else if (totalWeight <= 1400) {
        consumptionRate = fuelConsumption[2];
    }
    else if (totalWeight <= 1900) {
        consumptionRate = fuelConsumption[3];
    }
    else {
        std::cout << "Перевес! Грузовик не может поехать." << std::endl;
        return 0;
    }

  
    double totalDistance = distanceAB + distanceBC;
    double totalFuelNeeded = totalDistance * consumptionRate;

  
    double fuelToRefill = totalFuelNeeded - tankCapacity;

    if (fuelToRefill > 0) {
        std::cout << "Необходимо заправить " << fuelToRefill << " литров дизеля в пункте B." << std::endl;
    }
    else {
        std::cout << "Грузовик может доехать до пункта C с текущей загрузкой." << std::endl;
    }

    return 0 ;
}