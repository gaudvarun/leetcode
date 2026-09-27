# Write your MySQL query statement below
# idher product_i link ey hai aur right join lagega
SELECT p.product_name, s.year, s.price
FROM Product p
RIGHT JOIN Sales s ON p.product_id = s.product_id;