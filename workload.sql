-- Varying Bit Array
EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM testr, tests
WHERE testr.id = tests.id AND
testr.id >= 1000 AND
testr.id <= 2000 AND
tests.id >= 1500 AND
tests.id <= 2500;

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
WHERE testr.id <= 9000 AND
tests.id < 10;

-- Vary size of inner relation
EXPLAIN (ANALYZE) SELECT count(*) 
FROM testr, tests 
WHERE testr.id = tests.id AND 
testr.id < 9000 AND 
tests.id < 10;

EXPLAIN (ANALYZE) SELECT count(*) 
FROM testr, tests 
WHERE testr.id = tests.id AND 
testr.id < 9000 AND 
tests.id < 2000;

EXPLAIN (ANALYZE) SELECT count(*) 
FROM testr, tests 
WHERE testr.id = tests.id AND 
testr.id < 9000 AND 
tests.id < 4000;

EXPLAIN (ANALYZE) SELECT count(*) 
FROM testr, tests 
WHERE testr.id = tests.id AND 
testr.id < 9000 AND 
tests.id < 6000;

EXPLAIN (ANALYZE) SELECT count(*) 
FROM testr, tests 
WHERE testr.id = tests.id AND 
testr.id < 9000 AND 
tests.id < 8000;