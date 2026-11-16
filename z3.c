#include <stdio.h>

char d1, d2;
int g1, g2;
int t[26][7];

int main() {

  while (scanf(" %c %c %d %d", & d1 ,& d2 ,& g1 ,& g2) == 4) {
    if (d1 >= 'a') {
      t[d1 - 'a'][1]++;
      t[d1 - 'a'][5] += g1;
      t[d1 - 'a'][6] += g2;
    } else {
      t[d1 - 'A'][1]++;
      t[d1 - 'A'][5] += g1;
      t[d1 - 'A'][6] += g2;
    }
    if (d2 >= 'a') {
      t[d2 - 'a'][1]++;
      t[d2 - 'a'][5] += g2;
      t[d2 - 'a'][6] += g1;
    } else {
      t[d2 - 'A'][1]++;
      t[d2 - 'A'][5] += g2;
      t[d2 - 'A'][6] += g1;
    }
    if (g1 > g2) {
      if (d1 >= 'a') {
        t[d1 - 'a'][0] += 3;
        t[d1 - 'a'][2]++;
      } else {
        t[d1 - 'A'][0] += 3;
        t[d1 - 'A'][2]++;
      }
      if (d2 >= 'a') {
        t[d2 - 'a'][4]++;
      } else {
        t[d2 - 'A'][4]++;
      }
    } else {
      if (g1 == g2) {
        if (d1 >= 'a') {
          t[d1 - 'a'][0]++;
          t[d1 - 'a'][3]++;
        } else {
          t[d1 - 'A'][0]++;
          t[d1 - 'A'][3]++;
        }
        if (d2 >= 'a') {
          t[d2 - 'a'][0]++;
          t[d2 - 'a'][3]++;
        } else {
          t[d2 - 'A'][0]++;
          t[d2 - 'A'][3]++;
        }
      } else {
        if (d2 >= 'a') {
          t[d2 - 'a'][0] += 3;
          t[d2 - 'a'][2]++;
        } else {
          t[d2 - 'A'][0] += 3;
          t[d2 - 'A'][2]++;
        }
        if (d1 >= 'a') {
          t[d1 - 'a'][4]++;
        } else {
          t[d1 - 'A'][4]++;
        }
      }
    }
  }
  printf("Nazwa | Punkty | Mecze | Wygrane | Remisy | Przegrane | Gole+ | Gole-\n");
  for (int i = 0; i < 26; i++) {
    if (t[i][1] > 0) {
      char c = 'A' + i;
      printf("%-5c | %6d | %5d | %7d | %6d | %9d | %5d | %5d\n",
       c, t[i][0], t[i][1], t[i][2], t[i][3],
       t[i][4], t[i][5], t[i][6]);
    }
  }

}
