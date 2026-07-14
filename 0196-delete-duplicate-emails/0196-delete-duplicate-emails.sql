WITH DuplicateEmails AS (
    SELECT MIN(id) AS id, email
    FROM Person
    GROUP BY email
    HAVING COUNT(email) > 1
)
DELETE FROM Person
WHERE email IN (SELECT email FROM DuplicateEmails)
  AND id NOT IN (SELECT id FROM DuplicateEmails);
