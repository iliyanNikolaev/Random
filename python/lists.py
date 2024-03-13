todo_list = ['answer the call', 'go to interview', 'get the job']
favourite_numbers = [1, 18, 227]
random_data = ['ilich', 26, { 'city': 'Pleven', 'address': 'pl. Macedonia' }]

empty_list = list()

random_string = 'a b c d'
splited_string = random_string.split(' ')
# print(splited_string)
# print('-'.join(splited_string))

# NOTE: In python can join only list of strings, check example bellow
# print('-'.join([1, 2, 3])) // TypeError: sequence item 0: expected str instance, int found

# first_el = input()
# second_el = input()
# third_el = input()
# input_arr = [first_el, second_el, third_el]
# print(input_arr)

empty_list = []
empty_list.append(1)
empty_list.append(2)
empty_list.append(3)
empty_list.remove(1)

if 1 in empty_list:
    print('1 is in list')
else:
    print('1 is removed from list')

if 1 not in empty_list:
    print('1 not in list')
else:
    print('1 is in list')
