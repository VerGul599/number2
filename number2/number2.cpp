#include <iostream> 
#include <iomanip>
#include <Windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string pizzas[4] = { "Гавайская", "С ананансами", "Пепперони", "Острая" };
    std::string drinks[3] = { "Кола", "Спрайт", "Липтон" };
    double pizzaPrices[4] = { 10, 12, 15, 13 };
    double drinkPrices[3] = { 3, 2, 4 };


    int pizza, drink, pizzaQuantity, drinkQuantity;
    double total = 0;


    std::cout << "\t\t\t" << "Меню пиццы:" << "\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << i + 1 << ". " << pizzas[i] << " - $" << pizzaPrices[i] << "\n";
    }


    std::cout << "Введите номер пиццы: ";
    std::cin >> pizza;
    std::cout << "Количество: ";
    std::cin >> pizzaQuantity;


    total += pizzaPrices[pizza - 1] * pizzaQuantity;


    if (pizzaQuantity >= 5)
    {
        total -= pizzaPrices[pizza - 1];
    }


    std::cout << "\t\t\t" << "Меню напитков:" << "\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << i + 1 << ". " << drinks[i] << " - $" << drinkPrices[i] << "\n";
    }

    std::cout << "Введите номер напитка: ";
    std::cin >> drink;
    std::cout << "Количество: ";
    std::cin >> drinkQuantity;


    total += drinkPrices[drink - 1] * drinkQuantity;


    if (drinkPrices[drink - 1] > 2 && drinkQuantity > 3)
    {
        total -= total * 0.15;
    }

    if (total > 50)
    {
        total -= total * 0.2;
    }


    std::cout << "\n\n" << "Чек:";
    std::cout << pizzas[pizza - 1] << " - " << pizzaQuantity << " шт.";
    std::cout << drinks[drink - 1] << " - " << drinkQuantity << " шт.";
    std::cout << "\n\n" << "Итого к оплате: $" << total;

    return 0;
}