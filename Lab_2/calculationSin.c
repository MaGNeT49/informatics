#include <Python.h>

volatile double sink;
// Функция для вычисления синуса N раз и измерения времени выполнения
static PyObject* calculateSinusNTimes(PyObject* self, PyObject* args) {
    int N;


    PyArg_ParseTuple(args, "i", &N);

    clock_t start_time = clock(); // Запуск таймера

    // Вычисление синуса N раз
    for (int i = 0; i < N; ++i) {
        sink += sin(i);
        sink += sin(i);
        sink += sin(i);
        sink += sin(i);
        sink += sin(i);
        sink += sin(i);
        sink += sin(i);
        sink += sin(i);
        sink += sin(i);
        sink += sin(i);
    }

    clock_t end_time = clock(); // Завершение таймера
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC; // Вычисление времени выполнения в секундах

    return Py_BuildValue("f", time_taken);
}

// Немного документации для `add`
static char calculateSinusNTimes_docs[] =
"calculateSinusNTimes( ): calculating the sine N times\n";
/*
Эта таблица содержит необходимую информацию о функциях модуля
<имя функции в модуле Python>, <фактическая функция>,
<ожидаемые типы аргументов функции>, <документация функции>
*/
static PyMethodDef methods[] = {
{"calcSinNTimes", calculateSinusNTimes, METH_VARARGS, calculateSinusNTimes_docs},
{NULL, NULL, 0, NULL}
};
/*
addList имя модуля и это блок его инициализации.
<желаемое имя модуля>, <таблица информации>, <документация модуля>
*/
static struct PyModuleDef calcSinNTimes = {
    PyModuleDef_HEAD_INIT,
    "calcSinNTimes",
    "This is a module named calcSinNTimes",
    -1,
    methods
};

PyMODINIT_FUNC PyInit_calculateSinNTimes(void) {
    PyObject* module = PyModule_Create(&calcSinNTimes);

    return module;
}
