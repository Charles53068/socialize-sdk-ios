//
//  Header.h
//  SocializeSDK
//
//  Created by Nathaniel Griswold on 12/2/11.
//  Copyright (c) 2011 Socialize, Inc. All rights reserved.
//


// Error Definitions
extern NSString *const SocializeErrorDomain;

// userInfo keys for specific errors
extern NSString *const kSocializeErrorResponseBodyKey;
extern NSString *const kSocializeErrorServerErrorsArrayKey;
extern NSString *const kSocializeErrorNSHTTPURLResponseKey;

enum {
    SocializeErrorUnknown = -1,
    SocializeErrorUnexpectedJSONResponse,
    SocializeErrorServerReturnedErrors,
    SocializeErrorServerReturnedHTTPError,
    SocializeErrorFacebookCancelledByUser,
    SocializeErrorTwitterCancelledByUser,
    SocializeNumErrors,
};

NSString *SocializeDefaultLocalizedErrorStringForCode(NSUInteger code);