-- Varying Bit Array
EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM R, S
WHERE R.id = S.id AND
R.id >= 1000 AND
R.id <= 2000 AND
S.id >= 1500 AND
S.id <= 2500;

-- Vary size of outer relation
EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM R, S
WHERE R.id = S.id AND
R.id > 50 AND R.id <= 100 AND
S.id < 10;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM R, S
WHERE R.id = S.id AND
R.id > 1000 AND R.id <= 2000 AND
S.id < 10;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM R, S
WHERE R.id = S.id AND
R.id > 1000 AND R.id <= 3000 AND
S.id < 10;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM R, S
WHERE R.id = S.id AND
R.id > 5000 AND
S.id < 10;

EXPLAIN (ANALYZE) SELECT COUNT(*)
FROM R, S
WHERE R.id <= 9000 AND
S.id < 10;

-- Vary size of inner relation
EXPLAIN (ANALYZE) SELECT count(*) 
FROM R, S 
WHERE R.id = S.id AND 
R.id < 9000 AND 
S.id < 10;

EXPLAIN (ANALYZE) SELECT count(*) 
FROM R, S 
WHERE R.id = S.id AND 
R.id < 9000 AND 
S.id < 2000;

EXPLAIN (ANALYZE) SELECT count(*) 
FROM R, S 
WHERE R.id = S.id AND 
R.id < 9000 AND 
S.id < 4000;

EXPLAIN (ANALYZE) SELECT count(*) 
FROM R, S 
WHERE R.id = S.id AND 
R.id < 9000 AND 
S.id < 6000;

EXPLAIN (ANALYZE) SELECT count(*) 
FROM R, S 
WHERE R.id = S.id AND 
R.id < 9000 AND 
S.id < 8000;