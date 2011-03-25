//
//  ClockSampleAppDelegate.h
//  ClockSample
//
//  Created by abe on 11/03/26.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ClockSampleViewController;

@interface ClockSampleAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet ClockSampleViewController *viewController;

@end
