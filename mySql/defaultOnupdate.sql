-- DEFAULT & ON UPDATE TIMESTAMP

CREATE TABLE blogs(
	blog VARCHAR(150),
    created_at DATETIME DEFAULT CURRENT_TIMESTAMP,
    updated_at DATETIME ON UPDATE CURRENT_TIMESTAMP
);

INSERT INTO blogs (blog)
VALUES ('This is my first blog');

UPDATE blogs
	SET blog = 'This is my first blog from India';
    

