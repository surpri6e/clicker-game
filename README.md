# Clicker game

���������� ������� ������ ���� �� WinForm. ����� ����� ��������� ��� � ���� ��������.
������ ������ ���. ������� **dll** � **lib** ��������� �� �����������.


����� � Visual Studio 2022 ������� ������ ����� ������� ����� - 
***������ ������ CLR (.NET Framework)***

����� ������ �������:
 1. ����� ����� - *main*
 2. ���������� - *windows*

����� ��� ������ **.exe** ���� ����� ������� *Release* ������ � ��������� � SFX �����.

```c++
	chat::Registration^ registration = gcnew chat::Registration();
	registration->Dock = DockStyle::Fill;
	panelContainer->Controls->Clear();
	panelContainer->Controls->Add(registration);
	registration->BringToFront();
```

```panelContainer``` - ��������� � ������� �����.

��� �� ������� �������, �� ��� ��� ����� ������ ������ ���� ��� ���� � ������ ������!