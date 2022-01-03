# Virtual Functions
This problem is to get you familiar with virtual functions. Create three classes _Person_, _Professor_ and _Student_. The class _Person_ should have data members name and age. The classes _Professor_ and _Student_ should inherit from the class _Person_.

The class _Professor_ should have two data members: _publications_ and _cur_{id}_. There will be two member functions: _getdata_ and _putdata_. The function _getdata_ should get the input from the user: the _name_, _age_ and _publications_ of the professor. The function _putdata_ should print the _name_, _age_, _publications_ and the _cur_{id}_ of the professor.

The class _Student_ should have two data members: _marks_, which is an array of size **6** and _cur_{id}_. It has two member functions: _getdata_ and _putdata_. The function _getdata_ should get the input from the user: the _name_, _age_, and the _marks_ of the student in **6** subjects. The function _putdata_ should print the _name_, _age_, _sum_ of the marks and the _cur_{id}_ of the student.

For each object being created of the _Professor_ or the _Student_ class, sequential id's should be assigned to them starting from **1**.

Solve this problem using virtual functions, constructors and static variables. You can create more data members if you want.

## Input Format

There are two types of input. If the object being created is of the _Professor_ class, you will have to input the _name_, _age_ and _publications_ of the professor.

If the object is of the _Student_ class, you will have to input the _name_, _age_ and the _marks_ of the student in **6** subjects.

## Constraints

**1 <= _nameLen_ <= 100**, where **_nameLen_** is the length of the name.  
**1 <= _age_ <= 80**  
**1 <=  _publications_ <= 1000**  
**0 <= marks <= 100**, where marks is the marks of the student in each subject.

## Output Format

There are two types of output depending on the object.

If the object is of type _Professor_, print the space separated _name_, _age_, _publications_ and _id_ on a new line.

If the object is of the _Student_ class, print the space separated _name_, _age_, the _sum_ of the 
_marks_ in **6** subjects and _id_ on a new line.

## Sample Input
```
4
1
Walter 56 99
2
Jesse 18 50 48 97 76 34 98
2
Pinkman 22 10 12 0 18 45 50
1
White 58 87
```
## Sample Output
```
Walter 56 99 1
Jesse 18 403 1
Pinkman 22 135 2
White 58 87 2
```
