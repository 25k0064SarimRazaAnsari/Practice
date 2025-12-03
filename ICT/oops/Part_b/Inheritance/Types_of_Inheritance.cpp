// ⭐ Methods of Inheritance (Names Only)

// 1) Public Inheritance
// 2) Protected Inheritance
// 3) Private Inheritance


// =================================== 1) Public Inheritance ===================================
// class Child : public Parent {};

private → sirf Base class ke andar accessible

protected → Base aur Derived class dono me accessible

public → Base aur Derived class dono me accessible


// =================================== 2) Protected Inheritance ===================================

// class Child : protected Parent {};


private → sirf Base class ke andar accessible

protected → Base aur Derived class dono me accessible

public → Base aur Derived class me accessible (lekin child me protected ban jata hai)




// =================================== 2) Private Inheritance ===================================

// class Child : private Parent {};

Private members → Derived me access ❌

Protected members → Derived me private ban jata hai

Public members → Derived me private ban jata hai

Main ya outside code se Base ke public/protected members accessible nahi