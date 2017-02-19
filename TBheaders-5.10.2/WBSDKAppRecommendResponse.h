//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseResponse.h"

@class NSDate, NSString, WBAuthorizeResponse;

@interface WBSDKAppRecommendResponse : WBBaseResponse
{
    WBAuthorizeResponse *_authResponse;	// 8 = 0x8
    NSString *_userID;	// 16 = 0x10
    NSString *_accessToken;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    NSString *_refreshToken;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) WBAuthorizeResponse *authResponse; // @synthesize authResponse=_authResponse;
- (void).cxx_destruct;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;

@end
