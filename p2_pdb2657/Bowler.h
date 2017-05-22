/* 
 * File:   Bowler.h
 * Author: Frank Ducrest
 *
 * Created March 9, 2015
 */

#ifndef BOWLER_H
#define	BOWLER_H

#include <string>
using namespace std;

class Bowler {
public:
    
    Bowler();
    // sets name to "-nobody-", sets currentFrame to zero, initializes all 
    // elements of frameScores to zero and initializes all elements of 
    // isSpareStrike to "none"
        
    Bowler(string bowlerName);
    // sets name to the value passed in bowlerName, sets currentFrame to zero, 
    // initializes all elements of frameScores to zero and initializes all 
    // elements of isSpareStrike to "none"
    
    void enterPinsDownForCurrentFrame(int ball1 = 0, int ball2 = 0);
    // updates the score of the bowler for the current frame according to
    // Tony's tournament scoring system and increments the current frame count;
    //
    // a call of enterPinsDownForCurrentFrame() will pass zeros in both ball1
    // and ball2
    // 
    // a call of enterPinsDownForCurrentFrame(ball1Var) will pass the value in 
    // formal parameter (represented by ball1Var) to ball1 and a value of zero 
    // to ball2
    //
    // Note: Leave the '=0' code out of the actual methd function header!
    
    
    // void enterPinsDownForCurrentFrame(int ball1 = 0, int ball2 = 0, int ball3 = 0);
    // This method header may be uncommented for an extra point attempt, but 
    // should remain commented out otherwise.  In an extra point attempt, this 
    // header may be an independent function or may be used in place of the 
    // version of enterPinsDownForCurrentFrame with two parameters
    
    string getName();           
    // returns the name of the bowler
    
    int getCurrentFrame();      
    // returns the number of the frame to be bowled, which is the value in 
    // currentFrame + 1
    
    int getScore();             
    // returns the current points earned by the bowler including all frames up
    // to but not including the current frame
    
private:
    
    string name;		// name or 'handle' of the bowler

    int frameScores[10];	// stores score earned in each frame

    string isSpareStrike[10];	// allowed values: none, spare, strike;
                                // the value of the element at a given index
                                // indicates whether the value at the same index
                                // in frameScores indicates a "spare" or a 
                                // "strike" or neither ("none")

    int currentFrame;		// index of the current frame to be bowled
};

#endif	/* BOWLER_H */

