//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXContactBizLogicDelegate-Protocol.h"

@class NSMutableDictionary, NSString, TBURLActionRequest;

@interface TBWangwangURLHandler : NSObject <WXContactBizLogicDelegate>
{
    NSMutableDictionary *_nickAndItems;	// 8 = 0x8
    TBURLActionRequest *_lastRequest;	// 16 = 0x10
    NSString *_lastNick;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *lastNick; // @synthesize lastNick=_lastNick;
@property(retain, nonatomic) TBURLActionRequest *lastRequest; // @synthesize lastRequest=_lastRequest;
@property(retain, nonatomic) NSMutableDictionary *nickAndItems; // @synthesize nickAndItems=_nickAndItems;
- (void).cxx_destruct;
- (id)handleJoinGroupURLActionRequest:(id)arg1;
- (id)handleGroupQRCodeURLActionRequest:(id)arg1;
- (id)generateWangwangH5Url:(id)arg1;
- (id)handleChatURLActionRequest:(id)arg1;
- (id)handlerPushURL:(id)arg1 params:(id)arg2 request:(id)arg3;
- (id)controllerForMessageCenter:(id)arg1 query:(id)arg2;
- (id)handleURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
