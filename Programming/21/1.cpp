#include <iomanip>
#include <iostream>
#include <map>
#include <string>

using namespace std;

union U {
    char female_surname[20];
    bool was_in_zsu;
};

struct Person {
    string name, surname;
    int age;
    string sex;
    U u;
};

void fillPeople(vector<Person> &people, const int number) {
    for (int i = 0; i < number; i++) {
        Person person;
        string sex;

        cout << "Enter person (name, surname, age, sex and for female: female surname for male: "
                "was in zsu): ";
        cin >> person.name >> person.surname >> person.age >> person.sex;

        if (islower(person.name[0])) {
            person.name[0] = static_cast<char>(toupper(person.name[0]));
        } else if (islower(person.surname[0])) {
            person.surname[0] = static_cast<char>(toupper(person.surname[0]));
        }

        if (person.sex == "male") {
            string was_in_zsu;
            cin >> was_in_zsu;
            if (was_in_zsu == "true") {
                person.u.was_in_zsu = true;
            } else if (was_in_zsu == "false") {
                person.u.was_in_zsu = false;
            }
        } else if (person.sex == "female") {
            cin >> person.u.female_surname;
        }

        people.push_back(person);
    }
}

map<string, int> countSameSurnames(const vector<Person> &people) {
    map<string, int> result;
    for (const Person &person : people) {
        result[person.surname] += 1;
    }
    return result;
}

bool compareBySurname(const Person &a, const Person &b) {
    const int len =
        a.surname.length() < b.surname.length() ? a.surname.length() : b.surname.length();
    for (int i = 0; i < len; i++) {
        if (a.surname[i] < b.surname[i]) {
            return true;
        }
        if (a.surname[i] > b.surname[i]) {
            return false;
        }
    }
    return false;
}

void printPeople(const vector<Person> &people) {
    cout << setw(71) << setfill('-') << "-" << endl
         << setfill(' ') << left << setw(15) << "| Surname" << setw(15) << " | Name" << setw(15)
         << " | Sex" << setw(25) << " | ZSU or girl name"
         << "|" << endl
         << setfill('-') << setw(71) << "-" << endl;
    for (const auto &person : people) {
        cout << setfill(' ') << left << "| " << setw(14) << person.surname << "| " << setw(13)
             << person.name << "| " << setw(13) << person.sex;
        if (person.sex == "male") {
            string str = person.u.was_in_zsu ? "true" : "false";
            cout << "| " << setw(22) << str << "|";
        } else if (person.sex == "female") {
            cout << "| " << setw(22) << person.u.female_surname << "|";
        }
        cout << endl << setfill('-') << setw(71) << "-" << endl;
    }
}

int main() {
    constexpr int SIZE = 3;
    vector<Person> people;

    fillPeople(people, SIZE);
    sort(people.begin(), people.end(), compareBySurname);
    printPeople(people);

    auto sameSurnames = countSameSurnames(people);
    for (const auto &surname : sameSurnames) {
        cout << surname.first << ": " << surname.second << endl;
    }

    return 0;
}
