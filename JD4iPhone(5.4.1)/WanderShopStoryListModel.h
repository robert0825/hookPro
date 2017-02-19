//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

#import "NSCoding.h"

@class NSMutableArray, NSString, WanderShopUserDetailInfoModel;

@interface WanderShopStoryListModel : JDModel <NSCoding>
{
    WanderShopUserDetailInfoModel *userDetailInfo;
    long long storyCount;
    NSMutableArray *storyList;
    NSMutableArray *topStoryList;
    NSMutableArray *topActiveList;
    NSString *lastStoryPubDate;
    NSString *lastStoryPubId;
}

@property(copy, nonatomic) NSString *lastStoryPubId; // @synthesize lastStoryPubId;
@property(copy, nonatomic) NSString *lastStoryPubDate; // @synthesize lastStoryPubDate;
@property(retain, nonatomic) NSMutableArray *topActiveList; // @synthesize topActiveList;
@property(retain, nonatomic) NSMutableArray *topStoryList; // @synthesize topStoryList;
@property(retain, nonatomic) WanderShopUserDetailInfoModel *userDetailInfo; // @synthesize userDetailInfo;
@property(retain, nonatomic) NSMutableArray *storyList; // @synthesize storyList;
@property(nonatomic) long long storyCount; // @synthesize storyCount;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setDataWithDic:(id)arg1;

@end
