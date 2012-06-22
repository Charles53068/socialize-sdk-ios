//
//  SDKHelpers.h
//  SocializeSDK
//
//  Created by Nathaniel Griswold on 5/20/12.
//  Copyright (c) 2012 Socialize, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SocializeObjects.h"
#import "SZActivityOptions.h"

@class SZShareOptions;

void SZShowLinkToFacebookAlertView(void (^okBlock)(), void (^cancelBlock)());
SZSocialNetwork LinkedSocialNetworks();
SZSocialNetwork AvailableSocialNetworks();
typedef void (^ActivityCreatorBlock)(id<SZActivity>, void(^)(id<SZActivity>), void(^)(NSError*));
SocializeShareMedium SocializeShareMediumForSZSocialNetworks(SZSocialNetwork networks);
void CreateAndShareActivity(id<SZActivity> activity, SZActivityOptions *options, SZSocialNetwork networks, ActivityCreatorBlock creator, void (^success)(id<SZActivity> activity), void (^failure)(NSError *error));
SZActivityOptions *SZActivityOptionsFromUserDefaults(Class optionsClass);
BOOL ShouldShowLinkDialog();
BOOL SZErrorsAreDisabled();
void SZEmitUIError(id object, NSError *error);
void SZAuthWrapper(void (^success)(), void (^failure)(NSError *error));
void SZLinkAndGetPreferredNetworks(UIViewController *viewController, void (^completion)(SZSocialNetwork preferredNetworks), void (^cancellation)());
