#include <stdio.h>
int main() {
    int i, answer, score = 0;
    int correct_answers[5] = {2, 1, 3, 2, 1};

    printf("=================================\n");
    printf("      ONLINE QUIZ SYSTEM\n");
    printf("=================================\n\n");

    printf("Instructions:\n");
    printf("Choose the correct option (1-4)\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1) Mumbai\n2) Delhi\n3) Chennai\n4) Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == correct_answers[0]) score++;

    // Question 2
    printf("\n2. Which language is used for C programming?\n");
    printf("1) C\n2) Java\n3) Python\n4) HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == correct_answers[1]) score++;

    // Question 3
    printf("\n3. 2 + 2 = ?\n");
    printf("1) 3\n2) 5\n3) 4\n4) 6\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == correct_answers[2]) score++;

    // Question 4
    printf("\n4. Which is a programming language?\n");
    printf("1) HTML\n2) C++\n3) CSS\n4) XML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == correct_answers[3]) score++;

    // Question 5
    printf("\n5. Who is known as father of computer?\n");
    printf("1) Charles Babbage\n2) Einstein\n3) Newton\n4) Tesla\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == correct_answers[4]) score++;

    // Result
    printf("\n=================================\n");
    printf("        QUIZ RESULT\n");
    printf("=================================\n");
    printf("Total Questions: 5\n");
    printf("Correct Answers: %d\n", score);
    printf("Wrong Answers: %d\n", 5 - score);
    printf("Score: %d / 5\n", score);

    if(score == 5) {
        printf("Excellent!\n");
    } else if(score >= 3) {
        printf("Good Job!\n");
    } else {
        printf("Better Luck Next Time!\n");
    }

    printf("\nThank you for participating!\n");

    return 0;
}
