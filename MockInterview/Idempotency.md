Bhai, good start! You're thinking in the right direction. 👏

Evaluation of your answer

Your score

3.5 / 4

Correctness: 4/4

You correctly identified that the same idempotency key helps recognize a repeated payment and prevents another charge.

Clarity: 3/4

Your explanation is understandable, but you can make it more precise by explaining what the server returns.

Technical depth: 3/4

You mentioned the key and amount. Add that the server retrieves the previously stored result instead of executing the payment again.

Let's improve your interview answer

A more complete answer would be:

“Since both requests have the same idempotency key and payment details, the server recognizes the second request as a retry of the same logical transaction. It returns the previously stored payment result instead of initiating another charge, preventing duplicate payments.”

Remember: The server doesn't just detect the duplicate; it also needs to handle the response correctly.

Question 2 of 5 — A tricky HTTP question

Imagine you have this API:

DELETE /users/123

First request: The user is deleted successfully. Server returns 200 OK.

Second request: The user is already deleted. Server returns 404 Not Found.

Question: Is this DELETE API still idempotent? Why or why not?

Active recall · Question 2

Explain whether idempotency requires the server to return exactly the same response every time.

Yes, it is idempotent because the user remains deleted.
No, because the HTTP status codes are different.
I'm not sure yet.
Submit answer

Think about the difference between the effect on the system and the response sent to the client.

My answer to Idempotency quiz question 2: yes

Correct, bhai! ✅

Evaluation: 4/4

Your answer is right.

The DELETE API is still idempotent, even though the HTTP status codes differ.

Why?

First request: User is deleted → 200 OK.

Second request: User is already deleted → 404 Not Found.

The important thing is that the intended effect on the server remains the same: the user is deleted.

Idempotency does not require identical responses. It requires the same intended effect when the same operation is repeated.

Interview-ready answer

“ Yes, DELETE is idempotent because repeated requests leave the resource deleted. The response codes can differ, since idempotency concerns the effect on the server, not necessarily the exact response.”

Question 3 of 5 — The concurrency challenge

Imagine two identical payment requests arrive at your Express server at almost exactly the same time.

Both contain:

Idempotency-Key: pay_123

Your backend checks Redis using a normal GET first, then processes the payment if the key doesn't exist.

What could go wrong if both requests check Redis before either one saves the key?

Active recall · Question 3

Explain what might happen when two requests execute concurrently.

Submit my answer

Hint: Think about what happens when both requests see that the key does not exist.

My answer to Idempotency quiz question 3: One of the records will use the idempotency key to create a payment record

Bhai, you're partially correct! You recognized that a payment record gets created, but the important part of this question is what happens when both requests execute at the same time.

Evaluation: 2/4

Correct: You identified that a payment record may be created.

Missing: Both requests can independently decide to create a payment because they both see that the key doesn't exist.

Let's understand the race condition

Imagine two requests, A and B, arriving together.

Without atomic key claiming

Request A

Request B

GET key → missing
GET key → missing
Both believe they are processing a new payment.
Charge ₹1,000
Charge ₹1,000

Potential duplicate charge: ₹2,000

This is called a race condition: the correctness of the program depends on the timing of concurrent operations.

The key lesson

A separate GET followed by a SET is not an atomic operation.

Instead, use an atomic conditional operation, such as Redis SET key value NX, to ensure only one request claims the key.