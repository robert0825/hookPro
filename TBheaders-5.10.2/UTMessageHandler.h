//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBMMessageReceiver-Protocol.h"

@class NSArray, NSString;

@interface UTMessageHandler : NSObject <TBMMessageReceiver>
{
    id mOptLock;	// 8 = 0x8
    NSArray *_configKey;	// 16 = 0x10
}

@property(retain) NSArray *configKey; // @synthesize configKey=_configKey;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)didReceiveMessageNotification:(id)arg1;
- (void)setConfigMgr:(id)arg1 withNameSpace:(id)arg2 isUpdate:(_Bool)arg3;
- (void)orangeGroupConfig:(id)arg1;
- (void)listen;
- (void)queryOrangeArgs;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
