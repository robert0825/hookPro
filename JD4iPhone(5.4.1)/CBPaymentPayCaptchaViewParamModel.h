//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBModel.h"

@class CBBankCardInfoModel, NSString;

@interface CBPaymentPayCaptchaViewParamModel : CBModel
{
    NSString *_message;
    NSString *_signResult;
    CBBankCardInfoModel *_bankCardInfoModel;
    NSString *_token;
    NSString *_nextMethod;
    NSString *_channelId;
}

@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *nextMethod; // @synthesize nextMethod=_nextMethod;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) CBBankCardInfoModel *bankCardInfoModel; // @synthesize bankCardInfoModel=_bankCardInfoModel;
@property(copy, nonatomic) NSString *signResult; // @synthesize signResult=_signResult;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end
