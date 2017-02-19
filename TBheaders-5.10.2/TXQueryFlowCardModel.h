//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary, NSString, TXFCatInfoModel;
@protocol TXChaorenFlowCardItemModel;

@interface TXQueryFlowCardModel : TBJSONModel
{
    NSString *_result;	// 8 = 0x8
    NSString *_cnDesc;	// 16 = 0x10
    NSString *_cacheTime;	// 24 = 0x18
    NSString *_notice;	// 32 = 0x20
    NSString *_imageRedirectUrl;	// 40 = 0x28
    NSString *_iconRedirectUrl;	// 48 = 0x30
    NSString *_imageUrl;	// 56 = 0x38
    NSString *_iconUrl;	// 64 = 0x40
    NSString *_phoneEmptyMsg;	// 72 = 0x48
    NSString *_payButtonImage;	// 80 = 0x50
    NSString *_payButtonIcon;	// 88 = 0x58
    TXFCatInfoModel *_catInfo;	// 96 = 0x60
    NSArray<TXChaorenFlowCardItemModel> *_chaorenMap;	// 104 = 0x68
    NSDictionary *_flowCardList;	// 112 = 0x70
}

+ (id)deepCopy:(id)arg1;
@property(retain, nonatomic) NSDictionary *flowCardList; // @synthesize flowCardList=_flowCardList;
@property(retain, nonatomic) NSArray<TXChaorenFlowCardItemModel> *chaorenMap; // @synthesize chaorenMap=_chaorenMap;
@property(retain, nonatomic) TXFCatInfoModel *catInfo; // @synthesize catInfo=_catInfo;
@property(copy, nonatomic) NSString *payButtonIcon; // @synthesize payButtonIcon=_payButtonIcon;
@property(copy, nonatomic) NSString *payButtonImage; // @synthesize payButtonImage=_payButtonImage;
@property(copy, nonatomic) NSString *phoneEmptyMsg; // @synthesize phoneEmptyMsg=_phoneEmptyMsg;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *iconRedirectUrl; // @synthesize iconRedirectUrl=_iconRedirectUrl;
@property(copy, nonatomic) NSString *imageRedirectUrl; // @synthesize imageRedirectUrl=_imageRedirectUrl;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSString *cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *cnDesc; // @synthesize cnDesc=_cnDesc;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)findItemById:(id)arg1;
- (id)findDefaultItem;
- (id)findDefaultIndexAndFlowType;
- (id)findByChaorenTitle:(id)arg1;
- (id)findByShowTitle:(id)arg1;
- (id)allChaorenFlowShowTitle;
- (id)allFlowShowTitle;

@end
