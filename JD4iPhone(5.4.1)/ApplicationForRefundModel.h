//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface ApplicationForRefundModel : NSObject
{
    NSNumber *_tipId;
    NSNumber *_isDeliveryLayerShow;
    NSString *_tipSub;
    NSString *_confirmDeliveryDesc;
    NSString *_salesReturnUrl;
    NSString *_code;
    NSString *_tip;
    NSArray *_refundReasonList;
    NSArray *_wareInfoList;
}

@property(retain, nonatomic) NSArray *wareInfoList; // @synthesize wareInfoList=_wareInfoList;
@property(retain, nonatomic) NSArray *refundReasonList; // @synthesize refundReasonList=_refundReasonList;
@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *salesReturnUrl; // @synthesize salesReturnUrl=_salesReturnUrl;
@property(retain, nonatomic) NSString *confirmDeliveryDesc; // @synthesize confirmDeliveryDesc=_confirmDeliveryDesc;
@property(retain, nonatomic) NSString *tipSub; // @synthesize tipSub=_tipSub;
@property(retain, nonatomic) NSNumber *isDeliveryLayerShow; // @synthesize isDeliveryLayerShow=_isDeliveryLayerShow;
@property(retain, nonatomic) NSNumber *tipId; // @synthesize tipId=_tipId;
- (void).cxx_destruct;
- (void)wareInfoList:(id)arg1;
- (id)initWithDic:(id)arg1;

@end
