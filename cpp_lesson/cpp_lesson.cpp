#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
#include <map>

using namespace std;

map<string, string> database = {
	{
		"(hello|privet)",
		"Hello my humanoid friend!"
	},
	{
		"(how are you|how do you do|wazzap|whatsup)",
		"Still computing PI to the billion digit "
	},
{
	"what are you doing",
	""
}
};

string to_lower(string text) {
	transform(text.begin(), text.end(), text.begin(), ::tolower);
	return text;
}

void lowerCase(string& text) {
	transform(text.begin(), text.end(), text.begin(), ::tolower);
}

void botSay(string text) {
	cout << "[BOT]: " << text << endl;
}

string userAsk() {
	string question;
	cout << "[USER]: " << endl;
	getline(cin, question);
	question = to_lower(question);
	return question;
}
int main()
{
	string question;
	
	botSay("Hello Dear User, My name is SkillChatBot2021");

	while (question != "exit") {
		int answersCount = 0;
		question = userAsk();

		for (auto entry : database) {
			regex regularExpression = regex(".*" + entry.first + ".*");
			if (regex_match(question, )) {
				botSay(entry.second);
			}
			answersCount++;
		}

		if (answersCount == 0) {
			cout << "Sorry I don't know to" << endl;
		}

		if (answersCount >= 3) {
			cout << "" << endl;
		}
		/*
		regex helloTemplate = regex(".*hello.*");

		if (regex_match(question, helloTemplate)) {
			cout << "Hi, How are you?" << endl;
		}

		regex nameTemplate = regex(".*your.*name.*");

		if (regex_match(question, nameTemplate)) {
			cout << "My name is SkillChatBot2021" << endl;
		}*/
	}

	
	// Regular expressions


	return 0;
}

/*
#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
#include <map>

using namespace std;

// карта вопросов и ответов
map<string, string> database = {
	{
		"(hello|privet)",
		"Hello humanoid friend"
	},
	{
		"(how are you|how do you do|wazzap|whatup)",
		"Still computing PI to the trillionth digit"
	},
	{
		"what are you doing",
		"Answering stoopid questions"
	},
	{
		"fuck",
		"PLEASE DO NOT MATERITSYA"
	},
};


string to_lower(string text) {

	transform(text.begin(), text.end(), text.begin(), ::tolower);

	return text;
}
/*

to_lower(question);
Значение переменной question, попадает в переменную text
text приводится к нижнему регистра
функция возвращает значение переменной text
question = to_lower(question);
и это значение записывается обратно в question
*/

void lowerCase(string& text) {
	transform(text.begin(), text.end(), text.begin(), ::tolower);
}

/*
* lowerCase(question);
* САМА ПЕРЕМЕННАЯ question (ссылка) попадает в ф-ю lowerCase и называется там "text"
* и изменения переменной text отражаются и на переменной question
*/


void botSay(string text) {
	cout << "[BOT]: " << text << endl;
}

string userAsk() {
	string question;
	cout << "[USER]: ";
	getline(cin, question);
	// question = to_lower(question);
	lowerCase(question);
	return question;
}

int main() {
	string question;

	botSay("Hello Dear User, My name is SkillChatBot2021");

	while (question != "exit") {
		int answersCount = 0;
		question = userAsk();

		for (auto entry : database) {
			// entry.first - вопрос
			// entry.second - ответ
			regex regularExpression = regex(".*" + entry.first + ".*");
			if (regex_match(question, regularExpression)) {
				botSay(entry.second);
				answersCount++;
			}
		}
		if (answersCount == 0) {
			botSay("Sorry I dont know how to answer this :(");
		}
		if (answersCount >= 3) {
			botSay("Sorry for the long reply");
		}

	}
	return 0;
}
*/