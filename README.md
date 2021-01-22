## 中文参考资料

[runoob 设计模式教程](https://www.runoob.com/design-pattern/design-pattern-tutorial.html)

## C++ Design Patterns

Software design patterns are general reusable solutions to problems which occur
over and over again in object-oriented design enviroment. It is not a finished 
design that can be transformed into source code directly, but it is template how
to solve the problem. We can classify them by purpose into creational (abstract 
the instantiation process), structure (how classes and objects are composed to form 
larger structures) and behavioral patterns (the assignment of responsibilities between 
objects).  

#### Creational Patterns 
- [Abstract Factory], families of product objects
- [X] [Builder], how a composite object gets created (略懂)
- [Factory Method], subclass of object that is instantiated
- [X] [Prototype], class of object that is instantiated (略懂)
- [X] [Singleton], the sole instance of a class 
#### Structural Patterns
- [Adapter], interface to an object
- [X] [Bridge], implementation of an object 
- [Composite], structure and composition of an object
- [X] [Decorator], responsibilities of an object without subclassing
- [Façade], interface to a subsystem
- [Flyweight], storage costs of objects
- [X] [Proxy], how an object is accessed (its location)
#### Behavioral Patterns
- [Chain of Responsibility], object that can fulfill a request
- [X] [Command], when and how a request is fulfilled (略懂)
- [Interpreter], grammar and interpretation of a language
- [Iterator], how an aggregate's elements are accessed
- [Mediator], how and which objects interact with each other
- [X] [Memento], what private information is stored outside an object, and when (不常用)
- [X] [Observer], how the dependent objects stay up to date
- [X] [State], states of an object
- [X] [Strategy], an algorithm
- [X] [Template Method], steps of an algorithm
- [Visitor], operations that can be applied to objects without changing their classes

### Other Languages
In my repository you can find implementation of desgin patterns also in languages as 

* [Design Patterns in C++]
* [Design Patterns in Java]
* [Design Patterns in Python]

### References
Design patterns in this repository are based on

* [Design Patterns by The "Gang of Four"]
* [Head First: Design Patterns]
* [Wikipedia]

[Design Patterns in C++]: https://github.com/JakubVojvoda/design-patterns-cpp
[Design Patterns in Java]: https://github.com/JakubVojvoda/design-patterns-java
[Design Patterns in Python]: https://github.com/JakubVojvoda/design-patterns-python

[Design Patterns by The "Gang of Four"]: https://en.wikipedia.org/wiki/Design_Patterns
[Head First: Design Patterns]: http://www.headfirstlabs.com/books/hfdp/ 
[Wikipedia]: https://en.wikipedia.org/wiki/Software_design_pattern

[Abstract Factory]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/abstract-factory
[Builder]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/builder
[Factory Method]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/factory-method
[Prototype]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/prototype
[Singleton]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/singleton
[Adapter]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/adapter
[Bridge]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/bridge 
[Composite]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/composite
[Decorator]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/decorator
[Façade]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/facade
[Flyweight]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/flyweight
[Proxy]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/proxy
[Chain of Responsibility]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/chain-of-responsibility
[Command]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/command
[Interpreter]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/interpreter
[Iterator]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/iterator
[Mediator]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/mediator
[Memento]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/memento
[Observer]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/observer
[State]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/state
[Strategy]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/strategy
[Template Method]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/template-method
[Visitor]: https://github.com/JakubVojvoda/design-patterns-cpp/tree/master/visitor
git sta