#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

typedef struct {
    int* numbers;
    int count;
} LotteryRow;

void RandomizeNumbers(LotteryRow* row);
bool ContainsNumber(const LotteryRow* row, int number);

int main() {
    LotteryRow row;
    RandomizeNumbers(&row);
    for (int i = 0; i < row.count; i++) {
        printf("%d ", row.numbers[i]);
    }
    printf("\n");
    return 0;
}

void RandomizeNumbers(LotteryRow* row) {
    row->numbers = malloc(7 * sizeof(int));
    row->count = 0;
    while (row->count < 7) {
        int number = rand() % 40 + 1;
        if (!ContainsNumber(row, number)) {
            row->numbers[row->count] = number;
            row->count++;
        }
    }
    for (int i = 0; i < row->count; i++) {
        for (int j = i + 1; j < row->count; j++) {
            if (row->numbers[i] > row->numbers[j]) {
                int temp = row->numbers[i];
                row->numbers[i] = row->numbers[j];
                row->numbers[j] = temp;
            }
        }
    }
}

bool ContainsNumber(const LotteryRow* row, int number) {
    for (int i = 0; i < row->count; i++) {
        if (row->numbers[i] == number) {
            return true;
        }
    }
    return false;
}

/*
// Lotteryn koodi c# koodilla, jota käytettiin alkuperäisenä tiedostona
// käytettiin erillistä verkossa löytävää kielikääntäjä sivustoa.

namespace Exercise
{
  using System;
  using System.Collections.Generic;
  
  public class LotteryRow
  {
    private List<int> numbers;

    public LotteryRow()
    {
      this.RandomizeNumbers();
    }

    public List<int> Numbers()
    {
      return this.numbers;
    }

    public bool ContainsNumber(int number)
    {
      // Tests whether the number is already among the randomized numbers
      if (this.numbers.Contains(number))
      {
        return true;
      }// Draw and print a random number
      else
      {
        return false;
      }
    }
    public void RandomizeNumbers()
    {
      // initialize the list for numbers
      this.numbers = new List<int>();
      // Implement the randomization of the numbers by using the method ContainsNumber() here
     Random lotteryNbr = new Random();
     while (this.numbers.Count < 7)
     {
       int number = lotteryNbr.Next(1, 41);
       if(!this.ContainsNumber(number))
       {
         this.numbers.Add(number);
       }
     }
     this.numbers.Sort();
     
    
    
    }

  }
}

*/