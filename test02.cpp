#include <bits//stdc++.h>

#include <windows.h>

using namespace std;

class Node
{
public:
    string key;
    string value;
    Node *left;
    Node *right;
    Node(string key, string value)
    {
        this->key = key;
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class Dictionary
{
public:
    Node *root;
    Dictionary()
    {
        this->root = nullptr;
    }
    void insert(const string &key, const string &value)
    {
        this->root = insertHelper(this->root, key, value);
    }
    string search(const string &key)
    {
        Node *node = searchHelper(this->root, key);
        if (node == nullptr)
        {
            return "Key not found.";
        }
        else
        {
            return node->value;
        }
    }
    void remove(const string &key)
    {
        this->root = removeHelper(this->root, key);
    }
    void traverse(int num_per_page = 10)
    {
        int count = 0;
        traverseHelper(this->root, count, num_per_page);
    }

private:
    Node *insertHelper(Node *node, const string &key, const string &value)
    {
        if (node == nullptr)
        {
            return new Node(key, value);
        }
        if (key < node->key)
        {
            node->left = insertHelper(node->left, key, value);
        }
        else if (key > node->key)
        {
            node->right = insertHelper(node->right, key, value);
        }
        else
        {
            node->value = value;
        }
        return node;
    }
    Node *searchHelper(Node *node, const string &key)
    {
        if (node == nullptr || node->key == key)
        {
            return node;
        }
        if (key < node->key)
        {
            return searchHelper(node->left, key);
        }
        else
        {
            return searchHelper(node->right, key);
        }
    }
    
    Node *minNode(Node *node)
    {
        Node *current = node;
        while (current->left != nullptr)
        {
            current = current->left;
        }
        return current;
    }
    void traverseHelper(Node *node, int &count, int num_per_page)
    {
        if (node == nullptr)
        {
            return;
        }
        traverseHelper(node->left, count, num_per_page);
        cout << node->key << " : " << node->value << endl;
        count++;
        if (count % num_per_page == 0)
        {
            char input;
            cout << "Press enter to show next " << num_per_page << " items or q to logout3: ";
            cin.get(input);
            if (input == 'q')
            {
                return;
            }
        }
        traverseHelper(node->right, count, num_per_page);
    }
    Node *removeHelper(Node *node, const string &key)
    {
        if (node == nullptr)
        {
            return node;
        }
        if (key < node->key)
        {
            node->left = removeHelper(node->left, key);
        }
        else if (key > node->key)
        {
            node->right = removeHelper(node->right, key);
        }
        else
        {
            if (node->left == nullptr)
            {
                Node *temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr)
            {
                Node *temp = node->left;
                delete node;
                return temp;
            }
            Node *temp = minNode(node->right);
            node->key = temp->key;
            node->value = temp->value;
            node->right = removeHelper(node->right, temp->key);
        }
        return node;
    }
};
   void logout();
void logout1();
void logout2();
void logout3();
void END (){
        logout();
        logout1();
        logout2();
        logout3();
}

void menu2(){
  system("cls");
  cout<<"\t\t\t                                            \n";
  cout<<"\t\t\t                                            \n";
  cout<<"\t\t\t   ______ ________________________ ________ \n";
  cout<<"\t\t\t  /      /_______________________/|       /|\n";
  cout<<"\t\t\t /       |_______________________|/      / |\n";
}

void menu3(){
  system("cls");
  cout<<"\t\t\t                                            \n";
  cout<<"\t\t\t          ________________________          \n";
  cout<<"\t\t\t   ______/_______________________/|________ \n";
  cout<<"\t\t\t  /      |                       ||       /|\n";
  cout<<"\t\t\t /       |_______________________|/      / |\n";
}


void menu4(){
  system("cls");
  cout<<"\t\t\t          ________________________          \n";
  cout<<"\t\t\t         /_______________________/|         \n";
  cout<<"\t\t\t   ______|                       ||________ \n";
  cout<<"\t\t\t  /      |                       ||       /|\n";
  cout<<"\t\t\t /       |_______________________|/      / |\n";
}
void menu5(){
  system("cls");
  time_t s, val = 1;
  struct tm* current_time;
  s = time(NULL);
  current_time = localtime(&s);
  cout<<"\t\t\t          ________________________          \n";
  cout<<"\t\t\t         /_______________________/|         \n";
  cout<<"\t\t\t   ______|                       ||________ \n";
  cout<<"\t\t\t  /      |        %02d:%02d:%02d       ||       /|\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec;
  cout<<"\t\t\t /       |_______________________|/      / |\n";
}

void logout(){
  system("cls");
  menu4();
  cout<<"\t\t\t/_______________________________________/  |\n";
  cout<<"\t\t\t|                                       |  |\n";
  cout<<"\t\t\t|    ________________________________   |  |\n";
  cout<<"\t\t\t|    |------------------------------|   |  |\n";
  cout<<"\t\t\t|    |       Thank You              |   |  |\n";                 
  cout<<"\t\t\t|    |------------------------------|   |  |\n";
  cout<<"\t\t\t|       __________________________      |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |    Specially             |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  /\n";
  cout<<"\t\t\t|      |__________________________|     | /\n";
  cout<<"\t\t\t|_______________________________________|/\n";Sleep(1000);
}

void logout1(){
  system("cls");
  menu3();
  cout<<"\t\t\t/_______________________________________/  |\n";
  cout<<"\t\t\t|                                       |  |\n";
  cout<<"\t\t\t|    ________________________________   |  |\n";
  cout<<"\t\t\t|    |------------------------------|   |  |\n";
  cout<<"\t\t\t|    |           Goo                |   |  |\n";
  cout<<"\t\t\t|    |------------------------------|   |  |\n";
  cout<<"\t\t\t|       __________________________      |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |    Specially Thanks to   |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  /\n";
  cout<<"\t\t\t|      |__________________________|     | /\n";
  cout<<"\t\t\t|_______________________________________|/\n";Sleep(1000);
}



void logout2(){
  system("cls");
  menu2();
  cout<<"\t\t\t/_______________________________________/  |\n";
  cout<<"\t\t\t|                                       |  |\n";
  cout<<"\t\t\t|    ________________________________   |  |\n";
  cout<<"\t\t\t|    |------------------------------|   |  |\n";
  cout<<"\t\t\t|    |           Good               |   |  |\n";
  cout<<"\t\t\t|    |------------------------------|   |  |\n";
  cout<<"\t\t\t|       __________________________      |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |    Specially Thanks to   |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |            Our           |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  |\n";
  cout<<"\t\t\t|      |                          |     |  /\n";
  cout<<"\t\t\t|      |__________________________|     | /\n";
  cout<<"\t\t\t|_______________________________________|/\n";Sleep(1000);
}
void logout3(){
  system("cls");
  cout<<"\t\t\t                                            \n";
  cout<<"\t\t\t                                            \n";
  cout<<"\t\t\t   ________________________________________ \n";
  cout<<"\t\t\t  /       _______________________         /|\n";
  cout<<"\t\t\t /       (_______________________       / |\n";Sleep(35);
  cout<<"\t\t\t/_______________________________________/  |\n";Sleep(35);
  cout<<"\t\t\t|                                       |  |\n";Sleep(35);
  cout<<"\t\t\t|    ________________________________   |  |\n";Sleep(35);
  cout<<"\t\t\t|    |------------------------------|   |  |\n";Sleep(35);
  cout<<"\t\t\t|    |           Good Bye           |   |  |\n";Sleep(35);
  cout<<"\t\t\t|    |------------------------------|   |  |\n";Sleep(35);
  cout<<"\t\t\t|       __________________________      |  |\n";Sleep(35);
  cout<<"\t\t\t|      |                          |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |                          |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |    Specially Thanks to   |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |                          |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |            Our           |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |                          |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |                          |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |   Md. Manowarul Islam    |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |                          |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |            Sir           |     |  /\n";Sleep(35);
  cout<<"\t\t\t|      |__________________________|     | /\n";Sleep(35);
  cout<<"\t\t\t|_______________________________________|/\n";Sleep(35);
  Sleep(2000);
    exit(0);
}

void About(){
    system("cls");
    cout<<"\t\tWelcome to Phonebook application.\n"
        "\t\tWe think you already know about this application\n";
          cout<<"\n\n\tTeam members:";Sleep(50);
    cout<< "\n\t-------------";Sleep(50);
     cout<<"\n\n\t Kazi Isat Mahazabin \t\t  Sourav hasan \t\tNushera Tajrin Mimu \n";Sleep(50);
     cout<<"\t 2020-2-60-180  \t\t  2021-3-60-116\t\t2021-3-60-227\n";
    cout<<"\n\t\tpress any key to continue !\n";
}


void load(Dictionary &dict, const string &project)
{
    ifstream in("project.txt");
    if (in.is_open())
    {
        string line;
        while (getline(in, line))
        {
            size_t colon_pos = line.find(":");
            if (colon_pos != string::npos)
            {
                string key = line.substr(0, colon_pos);
                string value = line.substr(colon_pos + 2);
                dict.insert(key, value);
            }
        }
        in.close();
    }
    else
    {
        cout << "Error: could not open file " << project << endl;
    }
}



void saveHelper(Node *node, ofstream &out)
{
    if (node == nullptr)
    {
        return;
    }
    saveHelper(node->left, out);
    out << node->key << " : " << node->value << endl;
    saveHelper(node->right, out);
}
void save(Dictionary &dict, const string &project)
{
    ofstream out("project.txt");
    if (out.is_open())
    {
        saveHelper(dict.root, out);
        out.close();
    }
    else
    {
        cout << "Error: could not open file " << project<< endl;
    }
}
int main()
{
     system("cls");
     char x=219;
    cout<<""<< "\n\n\n\n\n\n\n\n\t\t\t                                         Welcome to Word Dictionary!";
    cout<<""<< "\n\n\t\t\t\t                                        Loding........";
    cout<<"\n\n\r\t\t\t\t"<<"                               "<< x << x << x << x << x << x << x << x<< x << x<< x << x << x << x << x << x << x << x << x<< x << x<< x <<" 15% " ;
    Sleep(700);
    cout<<"\r\t\t\t\t"<<"                               "<< x << x << x << x << x << x << x << x << x << x<< x << x<< x << x << x << x << x << x << x << x << x<< x << x<< x <<"25% " ;
        Sleep(650);
    cout<<"\r\t\t\t\t"<<"                               "<< x << x << x << x << x << x << x << x << x << x << x << x<< x << x<< x << x << x << x << x << x << x << x << x<< x << x<< x <<"40% " ;
        Sleep(600);
    cout<<"\r\t\t\t\t"<<"                               "<< x << x << x << x << x<< x << x<< x << x << x << x << x << x<< x << x<< x << x << x << x << x << x << x << x << x<< x << x<< x <<"50% " ;
        Sleep(550);
    cout<<"\r\t\t\t\t"<<"                               "<< x << x << x << x << x<< x << x<< x<< x << x << x << x << x << x<< x << x<< x << x << x << x << x << x << x << x << x<< x << x<< x <<"55% " ;
        Sleep(500);
    cout<<"\r\t\t\t\t"<<"                               "<< x << x << x << x << x<< x<< x<< x<< x << x << x << x << x << x << x<< x << x<< x << x << x << x << x << x << x << x << x<< x << x<< x <<"70% " ;
        Sleep(450);
    cout<<"\r\t\t\t\t"<<"                               "<< x << x << x << x << x<< x<< x<< x<< x<< x << x << x << x << x << x << x<< x << x<< x << x << x << x << x << x << x << x << x<< x << x<< x <<"90% " ;
        Sleep(300);
    cout<<"\r\t\t\t\t"<<"                               "<< x << x << x << x << x<< x << x<< x<< x<< x<< x<< x << x << x << x << x << x<< x << x<< x << x << x << x << x << x << x << x << x<< x << x<< x <<"100% " ;
    Sleep(100);
    system("cls");
    Dictionary dict;
    string project = "dictionary.txt";
    load(dict, project);
    int choice;
    string key, value;
    while (true)
    {
              cout<<"\t\t\t                                            \n";
  cout<<"\t\t\t                                            \n";
  cout<<"\t\t\t   ________________________________________ \n";Sleep(35);
  cout<<"\t\t\t  /       _______________________         /|\n";Sleep(35);
  cout<<"\t\t\t /       (_______________________)       / |\n";Sleep(35);
  cout<<"\t\t\t/_______________________________________/  |\n";Sleep(35);
  cout<<"\t\t\t|                                       |  |\n";Sleep(35);
  cout<<"\t\t\t|    ________________________________   |  |\n";Sleep(35);
  cout<<"\t\t\t|    |------------------------------|   |  |\n";Sleep(35);
  cout<<"\t\t\t|    | Welcome to  Word  Dictionary |   |  |\n";Sleep(35);
  cout<<"\t\t\t|    |------------------------------|   |  |\n";Sleep(35);
  cout<<"\t\t\t|                                       |  |\n";Sleep(35);
  cout<<"\t\t\t|     press the number to get access    |  |\n";Sleep(35);
  cout<<"\t\t\t|                                       |  |\n";Sleep(35);
  cout<<"\t\t\t|       __________________________      |  |\n";Sleep(35);
  cout<<"\t\t\t|      |                          |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |                          |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |  1. Search key           |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |  2. Insert a key-value   |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |  3. Remove a key         |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |  4. Display all key      |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |  5. Exit                 |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |  6. About Dictionary     |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |                          |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |                          |     |  |\n";Sleep(35);
  cout<<"\t\t\t|      |__________________________|     | /\n";Sleep(35);
  cout<<"\t\t\t|_______________________________________|/\n";Sleep(35);

        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
         system("cls");
            cout << "Enter key to search for: ";
            getline(cin, key);
            cout << dict.search(key) << endl;
            break;
        case 2:
         system("cls");
            cout << "Enter key to insert: ";
            getline(cin, key);
            cout << "Enter value to insert: ";
            getline(cin, value);
            dict.insert(key, value);
            save(dict, project);
            cout << "Key-value pair inserted." << endl;
            break;
        case 3:
         system("cls");
            cout << "Enter key to remove: ";
            getline(cin, key);
            dict.remove(key);
            save(dict, project);
            cout << "Key removed." << endl;
            break;
        case 4:
         system("cls");
            dict.traverse();
            break;
        case 5:
           END();
            break;
              case 6:
               system("cls");
            About();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
    }

    return 0;
}