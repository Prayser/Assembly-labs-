// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class First
{
private:
    //int A;
    //int B;

public:
    //First(int a, int b) {
      //  A = a;
       // B = b;
    //}


    int plus(int a, int b) {
        int c = 0;
        _asm
        {
            mov eax, a
            add eax, b
            mov c, eax
        }
        return c;
    }

    int minus(int a, int b) {
        int c = 0;
        _asm
        {
            mov eax, a
            sub eax, b
            mov c, eax
        }
        return c;
    }

    int mul(int a, int b) {
        int c = 0;
        _asm
        {
            mov ebx, a;
            mov eax, b;
            mul ebx;
            mov c, eax
        }
        return c;


    }

    int div(int a, int b) {
        int c = 0;
        _asm
        {
            mov eax, a
            mov ebx, b
            cdq
            idiv ebx
            mov c, eax
        }
        return c;
    }
    int equal(int a, int b) {
        int c = 0;
        _asm
        {
            mov eax, a
            cmp eax, b
            JE L1
            mov eax, 0
            JMP L
            L1: mov eax, 1
            L: mov c, eax
        }
        return c;
    }
    int more(int a, int b) {
        int c = 0;
        _asm
        {
            mov eax, a
            cmp eax, b
            JG L1
            mov eax, 0
            JMP L
            L1 : mov eax, 1
            L : mov c, eax
        }
        return c;
    }
    int less(int a, int b) {
        int c = 0;
        _asm
        {
            mov eax, a
            cmp eax, b
            JL L1
            mov eax, 0
            JMP L
            L1 : mov eax, 1
            L : mov c, eax
        }
        return c;
    }
    int fNOT(int a) {
        int c = 0;
        _asm
        {
            mov eax, a
            not eax
            mov c, eax
        }
        return c;
    }
    int fAND(int a, int b) {
        int c = 0;
        _asm
        {
            mov eax, a
            and eax, b
            mov c, eax
        }
        return c;
    }
    int fOR(int a, int b) {
        int c = 0;
        _asm
        {
            mov eax, a
            or eax, b
            mov c, eax
        }
        return c;
    }
    int fXOR(int a, int b) {
        int c = 0;
        _asm
        {
            mov eax, a
            xor eax, b
            mov c, eax
        }
        return c;
    }
    int LeftShift(int a, unsigned char k) {
        int c = 0;
        _asm
        {
            mov eax, a
            mov cl, k
            SHL eax, cl
            mov c, eax
        }
        return c;
    }
    int RightShift(int a, unsigned char k) {
        int c = 0;
        _asm
        {
            mov eax, a
            mov cl, k
            SHR eax, cl
            mov c, eax
        }
        return c;
    }

};

int main()
{
    std::cout << "Hello World!\n";

    First app;

    // PLUS
    std::cout << "PLUS:" << "\n";
    std::cout << app.plus(10, 7) << "\n";
    std::cout << app.plus(10, -7) << "\n";
    // MINUS
    std::cout << "MINUS:" << "\n";
    std::cout << app.minus(10, 7) << "\n";
    std::cout << app.minus(10, -7) << "\n";
    // MUL
    std::cout << "MUL:" << "\n";
    std::cout << app.mul(10, 7) << "\n";
    std::cout << app.mul(10, -7) << "\n";
    // DIV
    std::cout << "DIV:" << "\n";
    std::cout << app.div(10, 2) << "\n";
    std::cout << app.div(10, 3) << "\n";
    std::cout << app.div(10, -5) << "\n";
    // EQUAL
    std::cout << "EQUAL:" << "\n";
    std::cout << app.equal(4, 4) << "\n";
    std::cout << app.equal(40, 9) << "\n";
    std::cout << app.equal(15, 15) << "\n";
    // MORE
    std::cout << "MORE:" << "\n";
    std::cout << app.more(1, -4) << "\n";
    std::cout << app.more(40, 9) << "\n";
    std::cout << app.more(10, 15) << "\n";
    // LESS
    std::cout << "LESS:" << "\n";
    std::cout << app.less(1, -4) << "\n";
    std::cout << app.less(40, 9) << "\n";
    std::cout << app.less(10, 15) << "\n";
    // NOT
    std::cout << "NOT:" << "\n";
    std::cout << app.fNOT(1) << "\n";
    std::cout << app.fNOT(2) << "\n";
    // AND
    std::cout << "AND:" << "\n";
    std::cout << app.fAND(1, 3) << "\n";
    std::cout << app.fAND(10, 5) << "\n";
    // OR
    std::cout << "OR:" << "\n";
    std::cout << app.fOR(1, 3) << "\n";
    std::cout << app.fOR(10, 5) << "\n";
    // XOR
    std::cout << "XOR:" << "\n";
    std::cout << app.fXOR(1, 3) << "\n";
    std::cout << app.fXOR(10, 5) << "\n";
    // LEFT SHIFT
    std::cout << "LEFT SHIFT:" << "\n";
    std::cout << app.LeftShift(3, 2) << "\n";
    // RIGHT SHIFT
    std::cout << "RIGHT SHIFT:" << "\n";
    std::cout << app.RightShift(12, 2) << "\n";

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
