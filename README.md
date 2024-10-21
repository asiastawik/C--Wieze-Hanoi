# Wieże Hanoi

## Opis zadania

W tym zadaniu zaimplementujemy klasyczny algorytm **Wież Hanoi** w języku **C**. Problem Wież Hanoi polega na przenoszeniu zestawu krążków o różnych rozmiarach pomiędzy trzema patykami (lub wieżami) zgodnie z określonymi zasadami. Celem jest przeniesienie wszystkich krążków z jednego patyka na drugi, używając trzeciego patyka jako pomocniczego.

## Zasady działania

1. **Jedyny krążek**: Jeśli mamy tylko jeden krążek, to po prostu przenosimy go z patyka źródłowego na patyk docelowy.
  
2. **Dwa krążki**: Dla dwóch krążków, przenosimy najmniejszy krążek na patyk pomocniczy, następnie większy krążek na patyk docelowy, a na końcu najmniejszy krążek na patyk docelowy.

3. **Trzy krążki**: Problem z trzema krążkami można podzielić na trzy zadania:
   - Przenieść dwa górne krążki na patyk pomocniczy.
   - Przenieść największy krążek na patyk docelowy.
   - Przenieść dwa krążki z patyka pomocniczego na patyk docelowy.

Ogólnie, procedura przenoszenia `n` krążków z patyka `A` na patyk `C` z użyciem patyka `B` jako pomocniczego wygląda następująco:
1. Przenieś `n-1` krążków z `A` na `B` (używając `C` jako patyka pomocniczego).
2. Przenieś największy krążek z `A` na `C`.
3. Przenieś `n-1` krążków z `B` na `C` (używając `A` jako patyka pomocniczego).
