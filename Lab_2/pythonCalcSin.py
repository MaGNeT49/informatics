import time
import math


def calculate_sin_n_times(N):
    sink = 0
    start_time = time.time()  # Запуск таймера

    # Вычисление синуса N раз
    for i in range(N):
        sink += math.sin(i)
        sink += math.sin(i)
        sink += math.sin(i)
        sink += math.sin(i)
        sink += math.sin(i)
        sink += math.sin(i)
        sink += math.sin(i)
        sink += math.sin(i)
        sink += math.sin(i)
        sink += math.sin(i)
        # Здесь можно использовать другие значения для вычисления синуса

    end_time = time.time()  # Завершение таймера
    time_taken = end_time - start_time  # Вычисление времени выполнения в секундах

    return time_taken


print(calculate_sin_n_times(1000000))
