#include <iostream>
using namespace std;
int main ()
{
int m, t, w, th, f, sum;

cout << "Computing your total sales from monday to friday \n";
cout << "If the total sales from monday to friday is: \n";
cout << "1,000 above = Excellent! \n";
cout << "800- 999 = Great Job! \n";
cout << "600- 799= Good! \n";
cout << "400- 599 = Better Luck Next Week! \n";
cout << "399 below = You better change your business! \n";


cout << "Enter your total sales on monday: ";
cin >> m;
cout << "Enter your total sales on tuesday: ";
cin >> t;
cout << "Enter your total sales on wednesday: ";
cin >> w;
cout << "Enter your total sales on thursday: ";
cin >> th;
cout << "Enter your total sales on friday: ";
cin >> f;
sum = m + t + w + th + f;

if (sum >= 1,000 ) {
   cout << "\n Excellent!";
}

else if (sum <= 999 && sum >= 800) {
   cout << "Your total sales for the week is:" , cout << sum , cout << "\n Great Job!";
}

else if (sum <= 799 && sum >= 600) {
   cout << "Your total sales for the week is:" , cout << sum , cout << "\n Good!";
}

else if (sum <= 599 && sum >= 400) {
   cout << "Your total sales for the week is:" , cout << sum , cout << "\n Better Luck Next Week!";
}

else if (sum < 399) {
    cout << "Your total sales for the week is:" , cout << sum , cout << "\n You better change your business!";
}

else {
  cout << "Your total sales for the week is:" , cout << sum , cout << "\n Excellent Business, Your Sales is Greater than 1000!";
}
return 0;
}