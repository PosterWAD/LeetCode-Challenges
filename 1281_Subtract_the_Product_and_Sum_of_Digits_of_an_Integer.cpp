class Solution {
public:
    int subtractProductAndSum(int n) {

        int temp = n;
        int licznik = 0;
        int liczba = 0;
        int tab[6];

        while (temp > 0) {
            liczba = temp % 10;
            tab[licznik] = liczba;
            temp /= 10;
            licznik++;
        }

        int product = 1; // gdyby było 0 to ciągle byśmy mnożyli przez 0
        int sum = 0;

        for (int i = 0; i < licznik; i++) {
            product *= tab[i];
            sum += tab[i];
        }
        int result = product - sum;
        return result;
    }
};