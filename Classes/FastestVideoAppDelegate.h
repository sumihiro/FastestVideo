//
//  FastestVideoAppDelegate.h
//  FastestVideo
//
//  Created by 上田 澄博 on 11/03/02.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FastestVideoViewController;

@interface FastestVideoAppDelegate : NSObject <UIApplicationDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    UIWindow *window;
	UIImagePickerController *videoConteroller;
}

-(void)setupVideoController;
-(void)resetVideoController;

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic,retain) IBOutlet UIImagePickerController *videoConteroller;

@end

