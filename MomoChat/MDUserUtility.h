//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MomoNearbyDataManager, MomoUserProfileApi, MomoUserProfileHelper, UserProfileManager;

@interface MDUserUtility : NSObject
{
    MomoNearbyDataManager *_nearbyDataManager;
    UserProfileManager *_userProfileManager;
    MomoUserProfileApi *_profileApi;
    MomoUserProfileHelper *_profileHelper;
}

+ (id)userUtility;
@property(retain, nonatomic) MomoUserProfileHelper *profileHelper; // @synthesize profileHelper=_profileHelper;
@property(retain, nonatomic) MomoUserProfileApi *profileApi; // @synthesize profileApi=_profileApi;
@property(retain, nonatomic) UserProfileManager *userProfileManager; // @synthesize userProfileManager=_userProfileManager;
@property(retain, nonatomic) MomoNearbyDataManager *nearbyDataManager; // @synthesize nearbyDataManager=_nearbyDataManager;
- (void).cxx_destruct;
- (void)doUserUtilityActionHelperWithParams:(id)arg1;
- (void)doUserProfileApiActionWithParams:(id)arg1;
- (void)doUserUtilityActionWithParams:(id)arg1;
- (void)doUserUtilitySetUserProfile:(id)arg1;
- (void)doUserUtilityGetUserProfile:(id)arg1;

@end
