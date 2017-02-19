//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol AliDetailPromotionItemModel;

@interface AliDetailPromotionModel : TBJSONModel
{
    long long _promotionId;	// 8 = 0x8
    NSString *_link;	// 16 = 0x10
    NSString *_picUrl;	// 24 = 0x18
    NSString *_bgPicUrl;	// 32 = 0x20
    NSArray<AliDetailPromotionItemModel> *_memo;	// 40 = 0x28
    NSString *_promotionType;	// 48 = 0x30
    NSString *_naviIconUrl;	// 56 = 0x38
    NSString *_naviIconUrl4iPad;	// 64 = 0x40
    NSString *_navBgColor;	// 72 = 0x48
}

@property(retain, nonatomic) NSString *navBgColor; // @synthesize navBgColor=_navBgColor;
@property(retain, nonatomic) NSString *naviIconUrl4iPad; // @synthesize naviIconUrl4iPad=_naviIconUrl4iPad;
@property(retain, nonatomic) NSString *naviIconUrl; // @synthesize naviIconUrl=_naviIconUrl;
@property(retain, nonatomic) NSString *promotionType; // @synthesize promotionType=_promotionType;
@property(retain, nonatomic) NSArray<AliDetailPromotionItemModel> *memo; // @synthesize memo=_memo;
@property(copy, nonatomic) NSString *bgPicUrl; // @synthesize bgPicUrl=_bgPicUrl;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) long long promotionId; // @synthesize promotionId=_promotionId;
- (void).cxx_destruct;

@end
