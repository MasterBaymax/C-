# C-
This repository is willing to record my codes during finding works. 
# Factory
Factory Method 工厂模式定义一个用于创建对象的接口，让子类决定实例化哪一个类。
## 调用说明
Creator *p = new ConcreteCreator();
- new ConcreteCreator(); 新建ConcreteCreator对象，必定要调用基类Creator的构造函数，接着执行ConcreteCreator的构造函数，输出“construction of ConcreteCreator”
- 接下来执行p->AnOperation,在这个函数中，Product* p = FactoryMethod();中，FactoryMethod()在Creator类中是虚函数，在派生类ConcreteCreator进行了实现，返回了ConcreteProduct对象。这个对象的创建要调用基类Product，进而执行自身的构造函数construction of ConcreteProduct
- 接下来可以执行AnOperation函数中，cout << "an operation of product" << endl;语句
- delete p；执行后，对象消失，调用ConcreteCreator的析构函数，结束。
