//
//  SocializeComposeMessageViewControllerTests.h
//  SocializeSDK
//
//  Created by Nathaniel Griswold on 11/15/11.
//  Copyright (c) 2011 Socialize, Inc. All rights reserved.
//

#import <GHUnitIOS/GHUnit.h>
#import "SocializeComposeMessageViewController.h"

@interface SocializeComposeMessageViewControllerTests : GHTestCase
@property (nonatomic, retain) SocializeComposeMessageViewController *composeMessageViewController;
@property (nonatomic, retain) SocializeComposeMessageViewController *origComposeMessageViewController;
@property (nonatomic, retain) id mockView;
@property (nonatomic, retain) id mockSocialize;
@property (nonatomic, retain) id mockLocationManager;
@property (nonatomic, retain) id mockKbListener;
@property (nonatomic, retain) id mockLocationViewContainer;
@property (nonatomic, retain) id mockMapContainer;
@property (nonatomic, retain) id mockCommentTextView;
@property (nonatomic, retain) id mockLocationText;
@property (nonatomic, retain) id mockDoNotShareLocationButton;
@property (nonatomic, retain) id mockActivateLocationButton;
@property (nonatomic, retain) id mockMapOfUserLocation;
@end
