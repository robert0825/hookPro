//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol VideoPlayerLifecycleProtocol <NSObject>

@optional
- (void)onVideoViewTapAtPlayedTime:(double)arg1;
- (void)onVideoModeChangeTo:(long long)arg1;
- (void)onVideoTimeChanged:(double)arg1;
- (void)onVideoNormalScreen;
- (void)onVideoFullScreen;
- (void)onVideoComplete;
- (void)onVideoError:(NSError *)arg1;
- (void)onVideoPrepared;
- (void)onVideoSeekTo:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoClose;
- (void)onVideoStart;
@end
