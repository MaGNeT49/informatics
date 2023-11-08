class Stack:
    stack = []

    def __init__(self, array: list):
        Stack.stack = array

    def push(self, arg):
        Stack.stack.append(arg)

    def pop(self):
        return Stack.stack.pop()

    def get_stack(self):
        return Stack.stack


def main():
    array = list(
        map(lambda x: int(x) if x.isdigit() else str(x), input("Введите массив данных через пробел: ").split()))
    stack = Stack(array)

    print("Введите \"выход\" чтобы выйти из программы\n")
    while True:
        user_input = input("Что вы хотите сделать:"
                           "\n1.Извлечь последний элемент и вывести его."
                           "\n2.Добавить элемент в массив."
                           "\n3.Вывести массив данных."
                           "\n")
        if user_input == '1':
            print(stack.pop())
        elif user_input == '2':
            stack.push(input("Введите элемент: "))
        elif user_input == '3':
            print(stack.get_stack())
        elif user_input == "выход":
            break
        else:
            print("Введённый неверный формат!")


if __name__ == "__main__":
    main()
