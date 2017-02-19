//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

#import "LVProtocal-Protocol.h"

@class LView, NSString;

@interface LVLongPressGestureRecognizer : UILongPressGestureRecognizer <LVProtocal>
{
    LView *_lv_lview;	// 8 = 0x8
    struct _LVUserDataInfo *_lv_userData;	// 16 = 0x10
}

+ (int)classDefine:(struct lv_State *)arg1;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LView *lv_lview; // @synthesize lv_lview=_lv_lview;
- (void).cxx_destruct;
- (void)handleGesture:(id)arg1;
- (id)init:(struct lv_State *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
