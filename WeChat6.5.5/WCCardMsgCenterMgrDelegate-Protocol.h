//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCCardPkgMsg;

@protocol WCCardMsgCenterMgrDelegate <NSObject>
- (void)onWCCardListUpdate:(unsigned int)arg1;
- (void)onWCCardMessageEntryTipChanged:(WCCardPkgMsg *)arg1;
- (void)onWCCardMessageUnreadCountChanged:(WCCardPkgMsg *)arg1;
@end

