import random

'''
This file generates 5000 rows of data for the purpose of A1
To import this information into the data table run the following command:

COPY Data(id, A, B, C)
FROM '/cmshome/<utorid>/cscd43w25_space/A1_data_generation/datafile.csv'
DELIMITER ','
CSV;
=
'''

path = "./A1_data_generation/datafile.csv"
try:
  f = open(path, "w")
  for i in range(1, 5001):
    A = random.randint(1, 100)
    B = random.randint(1, 100)
    C = random.randint(1, 100)

    row = f"{i},{A},{B},{C}\n"
    f.write(row)
  f.close()
  print ("done generating file.")
except IOError as e:
  print(f"Error opening or writing to file: {e}")


