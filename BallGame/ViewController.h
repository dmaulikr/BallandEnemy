//
//  ViewController.h
//  BallGame
//
//  Created by Quix Creations Singapore iOS 1 on 22/8/15.
//  Copyright (c) 2015 Terry Chia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {

    IBOutlet UIButton *startButton;
    NSTimer *randomMain;
    CGPoint pos;
    IBOutlet UIImageView *player;
    IBOutlet UIImageView *enemy;
    
}

-(IBAction)start;



@end
