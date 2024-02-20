# Clicker game

Реализовал простую кликер игру на WinForm. Сразу можно вспомнить как с ними работать.
Утечек памяти нет. Никаких **dll** и **lib** библиотек не использовал.


Чтобы в Visual Studio 2022 сделать проект нужно выбрать пункт - 
***Пустой проект CLR (.NET Framework)***

Чтобы убрать консоль:
 1. точка входа - *main*
 2. подсистема - *windows*

Чтобы был только **.exe** файл можно сделать *Release* версию и поместить в SFX архив.

```c++
	chat::Registration^ registration = gcnew chat::Registration();
	registration->Dock = DockStyle::Fill;
	panelContainer->Controls->Clear();
	panelContainer->Controls->Add(registration);
	registration->BringToFront();
```

```panelContainer``` - контейнер в главной форме.

Это из другого проекта, но вот так можно делать разные окна для форм в разных файлах!