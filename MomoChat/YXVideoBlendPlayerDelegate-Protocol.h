//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YXVideoBlendPlayer;

@protocol YXVideoBlendPlayerDelegate <NSObject>
- (void)YXVideoBlendPlayerDoPause:(YXVideoBlendPlayer *)arg1;
- (void)YXVideoBlendPlayerDoPlay:(YXVideoBlendPlayer *)arg1;

@optional
- (void)YXVideoBlendPlayerProgress:(double)arg1;
@end
