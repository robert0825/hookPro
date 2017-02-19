//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol AliDetailEvaluatesModel;

@interface AliDetailSellerModel : TBJSONModel
{
    NSString *_userId;	// 8 = 0x8
    NSString *_shopId;	// 16 = 0x10
    NSString *_fans;	// 24 = 0x18
    NSString *_shopName;	// 32 = 0x20
    NSString *_shopIcon;	// 40 = 0x28
    NSString *_shopTitleIcon;	// 48 = 0x30
    NSString *_certIcon;	// 56 = 0x38
    NSString *_tagIcon;	// 64 = 0x40
    long long _creditLevel;	// 72 = 0x48
    long long _allItemCount;	// 80 = 0x50
    NSArray<AliDetailEvaluatesModel> *_evaluates;	// 88 = 0x58
    long long _newItemCount;	// 96 = 0x60
    NSString *_sellerType;	// 104 = 0x68
    NSString *_sellerNick;	// 112 = 0x70
    NSString *_starts;	// 120 = 0x78
    NSString *_goodRatePercentage;	// 128 = 0x80
}

@property(copy, nonatomic) NSString *goodRatePercentage; // @synthesize goodRatePercentage=_goodRatePercentage;
@property(copy, nonatomic) NSString *starts; // @synthesize starts=_starts;
@property(copy, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(copy, nonatomic) NSString *sellerType; // @synthesize sellerType=_sellerType;
@property(nonatomic) long long newItemCount; // @synthesize newItemCount=_newItemCount;
@property(retain, nonatomic) NSArray<AliDetailEvaluatesModel> *evaluates; // @synthesize evaluates=_evaluates;
@property(nonatomic) long long allItemCount; // @synthesize allItemCount=_allItemCount;
@property(nonatomic) long long creditLevel; // @synthesize creditLevel=_creditLevel;
@property(copy, nonatomic) NSString *tagIcon; // @synthesize tagIcon=_tagIcon;
@property(copy, nonatomic) NSString *certIcon; // @synthesize certIcon=_certIcon;
@property(copy, nonatomic) NSString *shopTitleIcon; // @synthesize shopTitleIcon=_shopTitleIcon;
@property(copy, nonatomic) NSString *shopIcon; // @synthesize shopIcon=_shopIcon;
@property(copy, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(copy, nonatomic) NSString *fans; // @synthesize fans=_fans;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)init;

@end
