SELECT product_id, product_name, description
FROM products
WHERE description REGEXP '\\bSN[0-9]{4}-[0-9]{4}\\b';
