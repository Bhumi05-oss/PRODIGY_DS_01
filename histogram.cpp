#include <iostream>
#include <vector>
#include <map>


using namespace std;
int main()
{
vector ages = {23, 45, 23, 30, 30, 30, 40, 45, 50, 50, 23, 23};

map<int, int> freq;

for (int age : ages) {
    freq[age]++;
}
cout << "Age Distribution Histogram:\n";
for (auto& entry : freq) {
cout << entry.first << " | ";
for (int i = 0; i < entry.second; ++i)
cout << "*";
cout << " (" << entry.second << ")\n";
}

return 0;
}