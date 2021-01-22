## State (状态模式)

The pattern allows an object to alter its behavior when its internal state changes.
The object will appear to change its class. It has behavioral purpose and applies 
to the objects.
 
在状态模式（State Pattern）中，类的行为是基于它的状态改变的。在状态模式中，我们创建表示
各种状态的对象和一个行为随着状态对象改变而改变的 context 对象。

### When to use

* when an object's behavior depends on its state, and it must change its behavior at run-time depending on that state
* operations have large, multipart conditional statements that depend on the object's state