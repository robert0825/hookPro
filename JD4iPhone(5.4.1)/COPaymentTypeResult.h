//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APIMetaResult.h"

@class NSArray, NSString;

@interface COPaymentTypeResult : APIMetaResult
{
    _Bool _isMixPayMent;
    NSString *_imageDomain;
    NSArray *_paymentInfos;
    NSArray *_showSkus;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(readonly, nonatomic) NSArray *showSkus; // @synthesize showSkus=_showSkus;
@property(readonly, nonatomic) NSArray *paymentInfos; // @synthesize paymentInfos=_paymentInfos;
@property(readonly, nonatomic, getter=isMixPayMent) _Bool isMixPayMent; // @synthesize isMixPayMent=_isMixPayMent;
@property(readonly, copy, nonatomic) NSString *imageDomain; // @synthesize imageDomain=_imageDomain;
- (void).cxx_destruct;

@end
