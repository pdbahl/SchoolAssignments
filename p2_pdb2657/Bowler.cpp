#include "Bowler.h"
#include <iostream>

Bowler::Bowler() {
    name = "-nobody-";
    currentFrame= 0;
    for (int i = 0; i < 10; i++) {
        frameScores[i] = 0;
        isSpareStrike[i] = "none";
    }
}

Bowler::Bowler(string bowlerName) {
    name = bowlerName;
    currentFrame = 0;
    for (int i = 0; i < 10; i++) {
        frameScores[i] = 0;
        isSpareStrike[i] = "none";
    }
}

void Bowler::enterPinsDownForCurrentFrame(int ball1, int ball2) {

    if (currentFrame == 0) {
        frameScores[currentFrame] = ball1 + ball2;
        if (ball1 == 10) {
            isSpareStrike[currentFrame] = "strike";

        } else if (ball1 + ball2 == 10) {
            isSpareStrike[currentFrame] = "spare";

        }
    }

    if (currentFrame == 1) {
        if (ball1 == 10) {
            isSpareStrike[currentFrame] = "strike";

        } else if (ball1 + ball2 == 10) {
            isSpareStrike[currentFrame] = "spare";

        }
        if (isSpareStrike[currentFrame - 1] == "spare") {
            frameScores[currentFrame] = ball1 * 2 + ball2;
        } else if (isSpareStrike[currentFrame - 1] == "strike") {
            frameScores[currentFrame] = (ball1 + ball2)*2;
        }
    } else if (currentFrame > 1 && currentFrame <=9) {
        if (ball1 == 10) {
            isSpareStrike[currentFrame] = "strike";

        } else if (ball1 + ball2 == 10) {
            isSpareStrike[currentFrame] = "spare";

        }
        if (isSpareStrike[currentFrame - 1] == "spare") {
            frameScores[currentFrame] = ball1 * 2 + ball2;
        } else if (isSpareStrike[currentFrame - 1] == "strike" && isSpareStrike[currentFrame - 2] == "strike") {
            if (ball1!=10) {
                frameScores[currentFrame] = ball1 + ball2*2;  

            }else{
                frameScores[currentFrame] = (ball1 + ball2)*3;
            }
        }else if (isSpareStrike[currentFrame - 1] == "strike") {
            frameScores[currentFrame] = (ball1 + ball2)*2;

        
        }else{
            frameScores[currentFrame]= ball1+ball2;
        }

    }




    currentFrame++;
  
}

string Bowler::getName() {
    return name;
}

int Bowler::getCurrentFrame() {
    return currentFrame + 1;
}

int Bowler::getScore() {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        score += frameScores[i];
    }
    return score;
}

