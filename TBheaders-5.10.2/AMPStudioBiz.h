//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPMsgBusHelp.h"

#import "AMPStudioBiz-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol AMPModuleManager, OS_dispatch_queue;

@interface AMPStudioBiz : AMPMsgBusHelp <AMPStudioBiz>
{
    NSMutableArray *_messageIdList;	// 8 = 0x8
    NSMutableDictionary *_msgId2Object;	// 16 = 0x10
    NSMutableArray *_messageCodeList;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_proccessQueue;	// 32 = 0x20
    _Bool _isPause;	// 40 = 0x28
    int _messageStorageBlockMaxNum;	// 44 = 0x2c
    id <AMPModuleManager> _moduleManager;	// 48 = 0x30
    NSString *_ccode;	// 56 = 0x38
}

@property(nonatomic) int messageStorageBlockMaxNum; // @synthesize messageStorageBlockMaxNum=_messageStorageBlockMaxNum;
@property(copy, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(retain, nonatomic) id <AMPModuleManager> moduleManager; // @synthesize moduleManager=_moduleManager;
- (void).cxx_destruct;
- (void)ampNewMessageCome:(id)arg1 stop:(_Bool *)arg2;
- (void)studioUserUpdate:(id)arg1 stop:(_Bool *)arg2;
- (void)studioAddCount:(id)arg1;
- (id)getDataFromMemWithCount:(int)arg1 andMessageId:(long long)arg2;
- (void)writeToMem:(id)arg1;
- (void)cleanMem;
- (_Bool)checkIsRepeatingMessage:(id)arg1;
- (id)packDictionaryParseGroup:(id)arg1;
- (id)packDictionaryParseUser:(id)arg1;
- (void)dispatchSafeSync:(CDUnknownBlockType)arg1;
- (id)messagesByMessageId:(long long)arg1 count:(int)arg2;
- (void)resumeReceiveMessageWithCcode:(id)arg1;
- (void)pauseReceiveMessageWithCcode:(id)arg1;
- (void)sendMessage:(id)arg1 resultAction:(CDUnknownBlockType)arg2;
- (id)createStudioGroupWithUserIds:(id)arg1 resultAction:(CDUnknownBlockType)arg2;
- (void)studioInfoByCode:(id)arg1 resultAction:(CDUnknownBlockType)arg2;
- (void)addCountWithCode:(id)arg1 count:(long long)arg2 resultAction:(CDUnknownBlockType)arg3;
- (void)studioUserInfoByCode:(id)arg1 index:(long long)arg2 size:(long long)arg3 resultAction:(CDUnknownBlockType)arg4;
- (void)deleteStudioUser:(id)arg1 ccode:(id)arg2 resultAction:(CDUnknownBlockType)arg3;
- (void)addStudioUser:(id)arg1 nick:(id)arg2 ccode:(id)arg3 headUrl:(id)arg4 resultAction:(CDUnknownBlockType)arg5;
- (void)startReceiveMsgWithCcode:(id)arg1;
- (void)registerPacketParse:(id)arg1;
- (void)stopBiz;
- (void)resetBiz;
- (void)startBiz;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
