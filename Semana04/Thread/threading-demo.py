import concurrent.futures
import threading
import time

start = time.perf_counter()


def do_something(seconds):
    print(f'Sleeping {seconds} second(s)...')
    time.sleep(seconds)
    return f'Done Sleeping...{seconds}'


# threads = []

# for _ in range(10):
#     t = threading.Thread(target=do_something, args=[1.5])
#     t.start()
#     threads.append(t)

# for thread in threads:
#     thread.join()


# with concurrent.futures.ThreadPoolExecutor() as executor:
#     secs = [5, 4, 3, 2, 1]
#     rresults = [executor.submit(do_something, sec) for sec in secs]
#
#     for f in concurrent.futures.as_completed(rresults):
#         print(f.result())


with concurrent.futures.ThreadPoolExecutor() as executor:
    secs = [5, 4, 3, 2, 1]
    results = executor.map(do_something, secs)

    for result in results:
        print(result)

finish = time.perf_counter()

print(f'Finished in {round(finish-start, 2)} second(s)')