//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppSyncActionExecute.h"

@class UINavigationController, UIViewController, WeAppActionManager, WeAppViewManager;

@interface WeAppCascadeSelectorActionExecute : WeAppSyncActionExecute
{
    WeAppViewManager *vm;	// 8 = 0x8
    WeAppActionManager *actionManager;	// 16 = 0x10
    UIViewController *popView;	// 24 = 0x18
    UINavigationController *navigationVC;	// 32 = 0x20
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelButton;
- (void)actionDoWithConditon:(id)arg1;
- (void)actionDo:(id)arg1;

@end
