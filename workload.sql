EXPLAIN (ANALYZE) 
SELECT testr.id, tests.id 
FROM testr 
INNER JOIN tests ON testr.id = tests.id 
WHERE testr.id >= 1000 AND testr.id <= 2000 AND tests.id >= 1500 AND tests.id <= 2500;

EXPLAIN (ANALYZE) 
SELECT testr.id, tests.id 
FROM testr LEFT JOIN tests ON testr.id = tests.id 
WHERE testr.id > 5000 AND tests.id <= 8000;

EXPLAIN (ANALYZE) 
SELECT testr.id, tests.id 
FROM testr LEFT JOIN tests ON testr.id = tests.id 
WHERE testr.id < 3000 AND tests.id >= 2000;

EXPLAIN (ANALYZE) 
SELECT count(*) 
FROM testr RIGHT JOIN tests ON testr.id = tests.id 
WHERE testr.id < 100 AND tests.id >= 20;

EXPLAIN (ANALYZE) 
SELECT count(*) 
FROM testr, tests 
WHERE testr.id = tests.id AND testr.id < 9000 AND tests.id < 10;
