
### Encryption
https://forum.qt.io/topic/82987/how-to-encrypt-and-decrypt-text-content-on-qt/8

[What Does it Take to Add Data Encryption to a Qt Application? | Platform | ](https://www.youtube.com/watch?v=tKFg6V9vis8)

###### QCA Steps 
https://api.kde.org/qca/html/index.html

https://stackoverflow.com/questions/6120497/qca-qtcrypto-in-qt-problem

https://www.linuxfromscratch.org/blfs/view/svn/general/qca.html

https://youtu.be/OBpX6R_lEnY

1. install with cmake and make (see INSTALL file)
2. edit ".pro" project file
	- add "LIBS += -L(dollar, dollar){PATH_QCA_LIB} -lqca"
	- add "crpto" to "CONFIG += "
3. build project
4. add QtCrypto header to project

### Security 
https://www.youtube.com/watch?v=Z_jhNuoczfw

[SEI Cert Secure C++ Coding Standards](https://wiki.sei.cmu.edu/confluence/pages/viewpage.action?pageId=88046682)

Integers (common vulnerability)

DOSing systems through applications is common - (scenario) secured by placing the potential vulnerability within a class and making use of input validation. 

Makes use of C++ templates with select properties.

[Boost "safe integer" Safe Numerics](http://htmlpreview.github.io/?https://github.com/robertramey/safe_numerics/master/doc/html/index.html)

Safe to convert from small unsigned ints to larger unsigned ints.

![[CompilerFlags.png]]

![[FlagsMitigateAttacks.png]]

![[SecureProgrammingACI.png]]

### haveibeenpwned/ vuln checks
https://www.youtube.com/watch?v=VYwdcBxHobs 
(opens link in browser - not as envisioned but still provides the functionality)


### Accessibility












### misc

https://doc.qt.io/qt-5/sql-connecting.html
