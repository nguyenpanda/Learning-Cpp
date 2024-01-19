import random
import string

def generate_test_case():
    random_string = ''.join(random.choice(string.ascii_letters) for _ in range(random.randint(100, 200)))
    test_case = f"LAPSE {random_string}"
    return test_case

def write_to_file(filename, number_of_test_cast: int = 100):
    with open(filename, 'w') as file:
        for i in range(number_of_test_cast):
            test_case = generate_test_case()
            file.write(test_case)
            file.write('\n')

if __name__ == "__main__":

    for i in range(10):
        write_to_file(f'LAPSE_test_case{i}.txt', 1000)

    # print(f"Test case generated and saved to 'test_case.txt': {test_case}")
