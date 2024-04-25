#include "MyClass.h"
#include "MyWrapper.h"

extern "C" {
        MyClass* newMyClass() {
                return new MyClass();
        }

        void MyClass_int_set(MyClass* v, int i) {
                v->int_set(i);
        }

        int MyClass_int_get2(MyClass* v) {
                return v->int_get();
        }

        void deleteMyClass(MyClass* v) {
                delete v;
        }
}