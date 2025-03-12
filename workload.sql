-- Varying Bit Array
EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id >= 1000 AND
testr.id <= 2000 AND
tests.id >= 1500 AND
tests.id <= 2500;
-- Vary size of inner relation
EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id > 10 AND
tests.id > 50 AND 
tests.id <= 100;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id > 10 AND
tests.id > 1000 AND tests.id <= 2000;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id > 10 AND
tests.id > 1000 AND tests.id <= 3000;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id > 10 AND
tests.id > 5000;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id > 10 AND
tests.id <= 9000;

-- Vary size of outer relation
EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id > 50 AND testr.id <= 100 AND
tests.id < 10;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id > 1000 AND testr.id <= 2000 AND
tests.id < 10;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id > 1000 AND testr.id <= 3000 AND
tests.id < 10;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id > 5000 AND
tests.id < 10;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
testr.id <= 9000 AND
tests.id < 10;

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
