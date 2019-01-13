﻿#include "pch.h"
#include <iostream>
#include "rooms.h"
 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	RoomController roomController;

	auto room0 = roomController.createRoom("Комната 0");
	auto room1 = roomController.createRoom("Комната 1");
	auto room2 = roomController.createRoom("Комната 2");
	auto room3 = roomController.createRoom("Комната 3");
	auto room4 = roomController.createRoom("Комната 4");
	auto room10 = roomController.createRoom("Комната 10");
	auto room56 = roomController.createRoom("Комнота продолжение 0");
	cout << "Привет, это так-то просто тест, который должен помочь мне развиться в сфере программировани" << endl;
	cout << "Добро пожаловать на борт, это Эпсилон-9. Мы находимся в Галактике *Млечный Путь*, возле планеты Луна" << endl;
	cout << "В дальнейшем для продолжения нажимайте на 0, затем enter" << endl;
	int op;
	cin >> op;
	cout << "- Погодите, но луна же спутник Земли, она не может быть планетой. Ох... голова... " << endl;
	cout << "В 2056 году, метиор под названием Анубис, на большой скорости влетел в планету Земля, от чего погибли триллионы людей. Лишь богатые и нужные для человечества люди смогли спастись" << endl;
	cin >> op;
	cout << "Оставшиеся люди были вынуждены отправиться на Луну. К сожалению осколок от зесли через 5 лет попал и в Луну и теперь люди летят на планету под названием Земля-2" << endl;
	cin >> op;
	cout << "- Что?! Это какой-то розыгрышь? Сейчас же 2019 год." << endl;
	cin >> op;
	cout << "Сэр, на данный момент, сегодня 22 октября 2196 года. Желаете что-то?" << endl;
	cin >> op;
	cout << "- Что за... Это бред, быть этого не может... Ну а... Ну а кто ты? Почему я тебя не вижу?" << endl;
	cin >> op;
	cout << "Я бортовой ИИ (Искуственный интелект) шатла Эпсилон-9. Меня создали для помощи людям и выполнения предписанных мне указаний" << endl;
	cin >> op;
	cout << "- Я брежу..." << endl;
	cin >> op;
	cout << "Вам помочь с вашей проблемой? Голова кружится? Еслть тошнота? У меня есть вся информация по медицине." << endl;
	cin >> op;
	cout << "- Нет, спасибо, я в порядке. А где все люди и почему покруг всё в разрухе? А это по-моему кровь." << endl; 
	cin >> op;
	cout << "У меня нет точного ответа, советую вам обратиться к должностным лицам. Они находятся обычно в комноте капитана" << endl;
	cin >> op;
	cout << "- Хорошо... Так как мне пройти в эту комноту? Я здесь не здешний" << endl;
	cin >> op;
	cout << "Я вам покажу карту. По пути сможете зайти в туалет, или в другие места, кроме тех, которые горят красной лампочкой" << endl;
	cin >> op;
	cout << "*Вам доступны действия, нажимайте соответсвующие клавиши, что бы продолжить дольше данную игру." << endl;
	cin >> op;
	cout << "Сэр, как прикажете вас называть?" << endl;
	cout << "Мне зовут... *На английском!* - ";
	string name;
	cin >> name; 
	cout << "Хорошо сэр " << name << endl; 
	cin >> op;
	cout << "*Перед вами несколько варинтов. От них будет зависить судьба вашего героя*"<< endl;
	cin >> op;
	cout << "Для начала мне нужно пойти..." << endl;

	room0->createVariant("На борт капитана", room1);
	room0->createVariant("Найти ванную комнату", room2); 
	room0->createVariant("Осмотреть обстановку", room56); 

	room56->createVariant("Вы находитесь в небольшой комноте. Обстановка мрачная и очень пугающая. Разбросанные вещи, пыльно и мрачно, а на стекле кровь", room0);
	
	room10->createVariant("На борт капитана", room1);
	room10->createVariant("Найти ванную комнату", room2);
	room10->createVariant("Осмотреть обстановку", room56);

	room2->createVariant("Вы вышли в коридор из комноты, и увидели полный разгром. Провода свисающие с потолков, стены, в которых были следы от пуль. Лужи крови и ни единого звука. Слева от себя вы увидели дверь, с надписью *Ванная комнота*. Зойдя внутрь, обстановка ничем не менялась. Вы решили посмотреть в зеркало. Не понятное чудовище, что-то похожее на инопланетное. *- Это кто?! Я?! Нет-нет-нет-нет! Что за... Эй! Компьютер или кто ты там, что это за херня! Ало?!*. Вы направляетесь на борт капитана капитана", room1);

	room1->createVariant("Идя на борт, вы ощущали дрожь и холод. Словно за вами наблюдали...", room4);


		







    roomController.start();


	return 0;
} 