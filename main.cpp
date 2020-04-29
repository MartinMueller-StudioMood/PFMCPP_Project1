#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: synth
//  action 1: synth generates sounds
synth.generate();
//  action 2: synth receives midi
synth.receiveMidi();
//  action 3: synth sends midi
synth.sendMidi();
//  2)
//  Noun: bus
//  action 1: bus transports people
bus.transport();
//  action 2: bus refuels energy
bus.refuel();
//  action 3: bus stops at bus station
bus.stop();
//  3)
//  Noun: threshold
//  action 1: threshold gets signal
threshold.getSignal();
//  action 2: threshold changed value
threshold.changedValue();
//  action 3: threshold is moved by user
threshold.isMoved();
//  4)
//  Noun: reverb
//  action 1: reverb simulates depth
reverb.simulateDepth();
//  action 2: reverb spread stereo width
reverb.spreadStereoWidth();
//  action 3: reverb set length
reverb.setLength();
//  5)
//  Noun: delay
//  action 1: delay sets delay time
delay.setDelayTime();
//  action 2: delay get dry/wet value
delay.getDryWet();
//  action 3: delay has feedback
delay.hasFeedback();
//  6)
//  Noun: eq
//  action 1: eq sets frequence to value 
eq.setFreq();
//  action 2: eq increases gain
eq.increaseGain();
//  action 3: eq selects mode
eq.selectMode();
//  7)
//  Noun: filter
//  action 1: filter moves frequence
filter.moveFreq();
//  action 2: filter changes envelope
filter.changeEnvelope();
//  action 3: filter modulates resonance 
filter.modulateResonance();
//  8)
//  Noun: truck 
//  action 1: truck transports good
truck.transports();
//  action 2: truck pull up brake
truck.pullUp();
//  action 3: truck speed up 
truck.speedUp();
//  9)
//  Noun: computer
//  action 1: computer copies file
computer.copy();
//  action 2: computer deletes picture
computer.deletePicture();
//  action 3: computer executes program
 computer.execute(); 
//  10)
//  Noun: teacher
//  action 1: teacher writes topics
teacher.write();
//  action 2: teacher asks questions
teacher.ask()
//  action 3: teacher creates feedback
teacher.createFeedback();
 


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
