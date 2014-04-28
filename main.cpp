/**
  * @author Maksim Shishkov
  * @file main.cpp
  * @brief A program that takes a string as a parameter and finds all the possible
  *        combinations of characters of the provided string using recursion.
  */

  #include <iostream>
  #include <string>


  using namespace std;

  void swap(char* first, char* second);
  void StringPermutations(string& word, int current, int length);
  void StringPermutations (string& word);




int main()
{
    string ABC = "ABC";
    StringPermutations(ABC);
    return 0;
}


void swap(char* first, char* second)
{
    char temp = *first;
    *first = *second;
    *second = temp;
}



void StringPermutations(string& word, int current, int length)
{
    if (current == length - 1)
        cout << word << endl;
    else
    {
        for (int i = current; i < length; i++)
        {
            swap(&word[current], &word[i]);
            StringPermutations(word, current + 1, length);
            swap(&word[current], &word[i]);
        }
    }
}

void StringPermutations (string& str)
{
    string word = str;
    int length = word.length();
    int curr = 0;
    StringPermutations(word, curr, length);
}
